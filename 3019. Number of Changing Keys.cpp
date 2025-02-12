#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int countKeyChanges(string s) {
        int count = 0;
        for (int i = 0; i < s.size() - 1; i++) {
            if (tolower(s[i]) != tolower(s[i + 1])) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    
    // Test cases
    string s1 = "aAbBcC";
    cout << "Input: " << s1 << " -> Output: " << sol.countKeyChanges(s1) << endl;

    string s2 = "AaAaAaaA";
    cout << "Input: " << s2 << " -> Output: " << sol.countKeyChanges(s2) << endl;

    string s3 = "abcdef";
    cout << "Input: " << s3 << " -> Output: " << sol.countKeyChanges(s3) << endl;

    string s4 = "AaaBBbCCc";
    cout << "Input: " << s4 << " -> Output: " << sol.countKeyChanges(s4) << endl;

    string s5 = "ZZzzzYYyyXx";
    cout << "Input: " << s5 << " -> Output: " << sol.countKeyChanges(s5) << endl;

    return 0;
}
