#include <iostream>
#include <stack>
using namespace std;

bool backspaceCompare(string s, string t) {
    stack<char> stack1, stack2;

   
    for (char c : s) {
        if (c != '#') {
            stack1.push(c);
        } else if (!stack1.empty()) {
            stack1.pop(); 
        }
    }

    
    for (char c : t) {
        if (c != '#') {
            stack2.push(c);
        } else if (!stack2.empty()) {
            stack2.pop(); 
        }
    }

  
    return stack1 == stack2;
}

int main() {
    string s1, s2;
    cout << "Enter String one: ";
    cin >> s1;
    cout << "Enter String two: ";
    cin >> s2;

    // Output "true" or "false" based on comparison
    cout << (backspaceCompare(s1, s2) ? "true" : "false") << endl;

    return 0;
}
