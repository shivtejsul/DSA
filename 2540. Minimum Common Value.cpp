#include <iostream>
#include <vector>
using namespace std;

int getCommon(vector<int>& nums1, vector<int>& nums2) {
    int i = 0, j = 0;
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] == nums2[j]) {
            return nums1[i];
        } else if (nums1[i] > nums2[j]) {
            j++;
        } else {
            i++;
        }
    }
    return -1;
}

int main() {
    vector<int> nums1 = {1, 3, 5, 7};
    vector<int> nums2 = {2, 3, 6, 8};

    int common = getCommon(nums1, nums2);
    if (common != -1) {
        cout << "The first common element is: " << common << endl;
    } else {
        cout << "No common element found." << endl;
    }

    return 0;
}
