#include<iostream>
#include<vector>
using namespace std;
int longestMonotonicSubarray(vector<int>& nums) {
       int incount=1,decount=1,ans=0,maxin=1,maxde=1;
       for(int i=0;i<nums.size();i++)
       {
            if(i+1<nums.size()&&nums[i]<nums[i+1])
            {
                incount++;
                decount=1;
            }
            else if(i+1<nums.size()&&nums[i]>nums[i+1])
            {
                incount=1;
                decount++;
            }
            else
            {
                incount=1;
                decount=1;
            }

            
            maxin=max(maxin,incount);

            maxde=max(maxde,decount);

       } 
       return max(maxin,maxde);
    }
int main()
{
    vector<int> nums = {1,4,3,3,2};
    cout<<longestMonotonicSubarray(nums);
    return 0;
}
