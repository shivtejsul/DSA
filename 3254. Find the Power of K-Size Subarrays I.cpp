#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> resultsArray(vector<int>& nums, int k) {
 vector<int>result;
 int n=nums.size();
 for(int i=0;i<=n-k;i++)
 {
    vector<int>subarray(nums.begin()+i,nums.begin()+i+k);
    if(is_sorted(subarray.begin(),subarray.end()))
    {
        bool con=true;
        for(int j=1;j<k;j++)
        {
            if(subarray[j]==subarray[j-1]+1)
            {
                con=false;
                break;
            }
            
        }
        if(con)
        {
            result.push_back(*max_element(subarray.begin(),subarray.end()));
        }
        else{
            result.push_back(-1);
        }
    }
    else
    {
        result.push_back(-1);
    }
    
 }
 return result;       
}
int main()
{
    int k;
    vector<int>nums={1,2,3,4,3,2,5},result;
    result=resultsArray(nums,k);
    for(auto i:result)
    {
        cout<<i<<"";
    }

    return 0;
}