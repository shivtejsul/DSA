#include<iostream>
#include<vector>
using namespace std;
 int addDigits(int num) {
    if(num==0)
    {
        return 0;
    }
    else if(num % 9==0)
    {
        return 9;
    }
    return num % 9;
}
int main()
{
    int num=83;
    cout<<addDigits(num);
    return 0;
}