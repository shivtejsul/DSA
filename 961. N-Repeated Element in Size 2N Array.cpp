#include<iostream>
#include<set>
#include<vector>
using namespace std;
int repeatedNTimes(vector<int>& nums) {
    set<int>maxi;
    for(auto i:nums)
    {
         if(maxi.find(i)!=maxi.end())
         {
             return i;
         }
         else
         {
             maxi.insert(i);
         }
    } 
    return 0;
 }
 int main()
 {
    vector<int>nums= {5,1,5,2,5,3,5,4};
    cout<<repeatedNTimes(nums);
    return 0;
 }