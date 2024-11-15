#include<iostream>
#include<string>
using namespace std;
bool isBalanced(string num) {
   int a,a1=0,a2=0;
   for(auto i:num)
   {
     a=i-'0';
     if(a%2==0)
     {
        a1+=a;
     }
     else{
        a2+=a;
     }
   } 
   return a1==a2;    
}
int main()
{
    string num;
    cin>>num;
    cout<<isBalanced(num);
    return 0;
}