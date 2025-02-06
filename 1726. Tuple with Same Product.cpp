#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> map;
        int i = 0, j = 1, count = 0;

        // Store product frequencies
        while (i < nums.size()) {
            if (j < nums.size()) {
                map[nums[i] * nums[j]]++;
                j++;
            } else {
                i++;
                j = i + 1;
            }
        }

        // Count valid tuples
        for (auto i : map) {
            if (i.second >= 2) {
                count += (i.second * (i.second - 1)) / 2;
            }
        }

        return count * 8;
    }
};

// Main function to test the solution
int main() {
    Solution sol;
    vector<int> nums = {2, 3, 4, 6}; // Example input
    int result = sol.tupleSameProduct(nums);
    
    cout << "Number of tuples: " << result << endl;
    
    return 0;
}
