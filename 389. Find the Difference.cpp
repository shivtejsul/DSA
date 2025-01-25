#include <iostream>
#include <string>
using namespace std;

char findTheDifference(string s, string t) {
    s += t; // Concatenate s and t
    int c = 0; 
    for (auto i : s) {
        c ^= i; // XOR all characters
    }
    return c;
}

int main() {
    // Example input strings
    string s = "abcd";
    string t = "abcde";

    // Call the function
    char extraChar = findTheDifference(s, t);

    // Output the result
    cout << "The extra character is: " << extraChar << endl;

    return 0;
}
