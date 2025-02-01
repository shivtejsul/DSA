#include <iostream>

using namespace std;

class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2) return n;
        
        int prev1 = 1, prev2 = 2;
        for (int i = 3; i <= n; i++) {
            int current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }
        return prev2;
    }
};

int main() {
    Solution sol;
    int n;
    
    cout << "Enter the number of stairs: ";
    cin >> n;

    int result = sol.climbStairs(n);
    cout << "Number of ways to climb " << n << " stairs: " << result << endl;

    return 0;
}
