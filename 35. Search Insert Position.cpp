#include<iostream>
#include<vector>
using namespace std;
 int searchInsert(vector<int>& nums, int target) {
   int min=0,max=nums.size()-1,mid;
   if(target==0)
   {
    return 0;
   }
   while(min<=max)
   {
    mid=(min+max)/2;
    if(nums[mid]==target)
    {
        return mid;
    }
    else if(nums[mid]<target)
    {
       min=mid+1;
    }
    else{
        max=mid-1;
    }
   }
    return min;    
    }

int main()
{
  vector<int> no={1,3,5,6};
  int target;
  cout<<"Enter the target:"<<endl;
  cin>>target;
  cout<<searchInsert(no,target);

    return 0;
}