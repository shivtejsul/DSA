#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int missingNumber(vector<int>& nums) {
       int n=nums.size(); 
       sort(nums.begin(),nums.end());
       for(int i=0;i<n;i++)
       {
           if(i!=nums[i])
           {
               return i;
           }

       }
       return nums[n-1]+1;
    }
    int main()
    {
        vector<int>nums={0,1,3};
        cout<<missingNumber(nums);
        return 0;
    }