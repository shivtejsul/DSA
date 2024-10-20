#include <iostream>
#include <vector>
#include <string>
using namespace std;

int countValidSubstrings(string s, int k) {
    int n = s.length();
    int result = 0;

    // Iterate over all possible starting points of the substring
    for (int i = 0; i < n; i++) {
        vector<int> freq(26, 0); // Frequency array for characters

        // Expand the window for all substrings starting at 'i'
        for (int j = i; j < n; j++) {
            freq[s[j] - 'a']++; // Update the frequency for the current character

            // Check if there is any character with at least 'k' frequency
            bool isValid = false;
            for (int m = 0; m < 26; m++) {
                if (freq[m] >= k) {
                    isValid = true;
                    break;
                }
            }

            if (isValid) {
                result++; // Count this substring as valid
            }
        }
    }

    return result;
}

int main() {
    string s;
    int k;
    cout << "Enter the string: ";
    cin >> s;
    cout << "Enter the value of k: ";
    cin >> k;

    int result = countValidSubstrings(s, k);
    cout << "Total number of valid substrings: " << result << endl;

    return 0;
}
