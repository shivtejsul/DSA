#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 vector<int> numberGame(vector<int>& nums) {
 sort(nums.begin(),nums.end());
 for(int i=0;i<nums.size();i+2)
 {
    int temp=nums[i];
    nums[i]=nums[i+1];
    nums[i+1]=nums[i];

 }  
 return nums;    
}
int main()
{
    vector<int>nums={5,4,2,3},as;
     as=numberGame(nums);
     for(auto i:as)
     {
        cout<<i<<" "<<endl;
     }
    return 0;
}