#include<iostream>
#include<vector>
using namespace std;
 int singleNonDuplicate(vector<int>& nums) {
    int high,low,mid;
      high=nums.size()-1;
      low=0;
      while(low<high)
      { 
        mid=low+(high-low)/2;
       
         if(mid%2==1)
        {
           mid--;
        }
        if(nums[mid]==nums[mid+1])
        {
           low=mid+2;
        }
        else
        {
            high=mid;
        }
       
      }  
      return nums[low];
    }
int main()
{
    vector<int >vec={1,1,2,3,3,4,4,8,8};
    cout<<singleNonDuplicate(vec);
    return 0;
}