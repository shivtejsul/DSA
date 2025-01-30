#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n == 1) {
            return true;
        }
        if (n % 4 != 0 || n == 0) {
            return false;
        }
        return isPowerOfFour(n / 4);
    }
};

int main() {
    Solution solution;
    int num;
    
    cout << "Enter a number: ";
    cin >> num;

    if (solution.isPowerOfFour(num)) {
        cout << num << " is a power of four.\n";
    } else {
        cout << num << " is not a power of four.\n";
    }

    return 0;
}
