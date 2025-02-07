#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> vec;
        for (auto i : nums) {
            vec.push_back(i * i);
        }
        sort(vec.begin(), vec.end());
        return vec;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {-4, -1, 0, 3, 10}; // Example input
    vector<int> result = sol.sortedSquares(nums);

    cout << "Sorted squares: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
