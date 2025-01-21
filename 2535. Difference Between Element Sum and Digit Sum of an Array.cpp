#include<iostream>
#include<vector>
using namespace std;
 int differenceOfSum(vector<int>& nums) {
 int ans=0,ans1=0;
 for(auto i:nums)
 {
   ans+=i;
    while(i>0)
        {
            int rem=i%10;
            ans1+=rem;
            i/=10;
        }
   
 }
 return ans-ans1;

}
int main()
{
    vector<int>nums = {1,15,6,3};
    cout<<differenceOfSum(nums);
    return 0;
}