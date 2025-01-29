#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end()); // Sort arr2 for binary search
        int count = 0;

        for (int num : arr1) {
            auto it = lower_bound(arr2.begin(), arr2.end(), num); // Find closest element >= num
            bool isValid = true;

            // Check the closest element (it)
            if (it != arr2.end() && abs(num - *it) <= d) {
                isValid = false;
            }

            // Check the previous element (it - 1)
            if (it != arr2.begin() && abs(num - *(it - 1)) <= d) {
                isValid = false;
            }

            if (isValid) count++;
        }

        return count;
    }
};

int main() {
    Solution sol;
    vector<int> arr1 = {4, 5, 8};
    vector<int> arr2 = {10, 9, 1, 8};
    int d = 2;

    cout << "Distance Value: " << sol.findTheDistanceValue(arr1, arr2, d) << endl;
    return 0;
}
