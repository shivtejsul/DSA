#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> generateSteps(string target) {
    vector<string> result;
    string current = "";  

    for (char c : target) {
        
        if (current.size() < target.size()) {
            current += 'a';
            result.push_back(current);
        }

        while (current.back() != c) {
            current.back() = (current.back() - 'a' + 1) % 26 + 'a';
            result.push_back(current);
        }
    }

    return result;
}

int main() {
    string target;
    cout << "Enter the target string: ";
    cin >> target;

    vector<string> steps = generateSteps(target);
    for (const string &s : steps) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
