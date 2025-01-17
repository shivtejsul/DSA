#include <bits/stdc++.h>
using namespace std;

int maxDivScore(vector<int>& nums, vector<int>& divisors) {
    int maxScore = 0;
    int bestDivisor = INT_MAX;

    for (auto divisor : divisors) {
        int count = 0;
        for (auto num : nums) {
            if (num % divisor == 0) {
                count++;
            }
        }

        // Update the best divisor based on the score and tie-breaking
        if (count > maxScore || (count == maxScore && divisor < bestDivisor)) {
            maxScore = count;
            bestDivisor = divisor;
        }
    }

    return bestDivisor;
}
int main()
{
    vector<int> nums = {2,9,15,50}, divisors = {5,3,7,2};
    cout<<maxDivScore(nums,divisors);
    return 0;
}