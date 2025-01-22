#include<iostream>
using namespace std;
int hammingWeight(int n) {
        int count=0,ans=0;
      while(n!=0)
      {
        ans=n%2;
        if(ans==1)
        {
        count++;
        }
        n/=2;
      } 
      return count; 
    }
int main()
{
    int n;
    cin>>n;
    cout<<hammingWeight(n);
}