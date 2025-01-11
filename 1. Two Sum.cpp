#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
 vector<int> twoSum(vector<int>& nums, int target) {
 unordered_map<int,int>map;
 int ans=0;
 vector<int>index;
 for(int i=0;i<nums.size();i++)
 {
    map[nums[i]]=i;
 } 
 for(int i=0;i<nums.size();i++){
    ans=target - nums[i];
    if(map.find(ans)!= map.end()&& map[ans] != i)
    {
        index.push_back(i);
        index.push_back(map[ans]);
        break;
    }
    
 } 
 return index;     
}
int main()
{
   vector<int>nums = {3,2,4},n;
   int target = 6;
   n=twoSum(nums,target);
   for(auto i:n)
   {
    cout<<i<<" "<<endl;
   }
    return 0;


}