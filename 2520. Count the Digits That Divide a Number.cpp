#include<iostream>
using namespace std;
    int countDigits(int num) {
        int count=0,ans=num,temp=0;
        while(ans>0)
        {
            temp=ans%10;
            if(num%temp==0)
            {
                count++;
            }
            ans/=10;
        }
        return count;
    }
int main()
{
    int num;
    cin>>num;
    cout<<countDigits(num);
    return 0;
}
