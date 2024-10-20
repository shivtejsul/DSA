#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Function to find the greatest proper divisor of a number
int greatestProperDivisor(int x) {
    if (x == 1) return 1;
    for (int i = sqrt(x); i >= 1; i--) {
        if (x % i == 0) {
            int divisor = x / i;
            if (divisor < x) return divisor;
        }
    }
    return 1;
}

// Function to count minimum operations to make nums non-decreasing
int minOperations(vector<int>& nums) {
    int n = nums.size();
    int operations = 0;

    for (int i = n - 2; i >= 0; i--) {
        while (nums[i] > nums[i + 1]) {
            int gpd = greatestProperDivisor(nums[i]);
            if (gpd == 1) {
                // If GPD is 1, we cannot reduce it further, so return -1
                return -1;
            }
            nums[i] /= gpd;
            operations++;
        }
    }

    return operations;
}

int main() {
    vector<int> nums = {25, 7};
    cout << "Minimum operations: " << minOperations(nums) << endl;

    vector<int> nums2 = {7, 7, 6};
    cout << "Minimum operations: " << minOperations(nums2) << endl;

    vector<int> nums3 = {1, 1, 1, 1};
    cout << "Minimum operations: " << minOperations(nums3) << endl;

    return 0;
}
