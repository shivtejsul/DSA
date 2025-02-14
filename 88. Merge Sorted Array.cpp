#include <iostream>
#include <vector>
using namespace std;

    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n){
        int i=m-1,j=n-1,k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[k]=nums1[i];
                k--;i--;
            }else{
                nums1[k]=nums2[j];
                k--;j--;
            }
        }

        while(j>=0){
            nums1[k]=nums2[j];
            k--;j--;
            }
    }
int main(){
    vector<int> nums1,nums2;
    nums1 ={0};
    nums2 ={1};
    int m= nums1.size();
    int n= nums2.size();

    merge(nums1,m-n,nums2,n);
     return 0;
}