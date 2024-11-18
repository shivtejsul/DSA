#include <iostream>
#include <string>
#include <algorithm> // For reverse()

using namespace std;

string addStrings(string num1, string num2) {
    int i = num1.size() - 1;
    int j = num2.size() - 1;
    int carry = 0;
    string result = "";

    while (i >= 0 || j >= 0 || carry > 0) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        result += (sum % 10) + '0'; // Append the current digit
        carry = sum / 10;           // Update carry

        i--;
        j--;
    }

    reverse(result.begin(), result.end()); // Reverse the result
    return result;
}

int main() {
    // Example 1
    string num1 = "11";
    string num2 = "123";
    cout << "Sum: " << addStrings(num1, num2) << endl; // Output: 134

    // Example 2
    num1 = "456";
    num2 = "77";
    cout << "Sum: " << addStrings(num1, num2) << endl; // Output: 533

    // Example 3
    num1 = "0";
    num2 = "0";
    cout << "Sum: " << addStrings(num1, num2) << endl; // Output: 0

    return 0;
}
