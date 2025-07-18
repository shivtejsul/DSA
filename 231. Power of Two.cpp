#include<iostream>
using namespace std;
bool isPowerOfTwo(int n) {
     if(n<=0)
     {
        return false;
     } 
     if(n==1)
     {
        return true;
     }  
     while(n % 2 ==0)
     {
        n/=2;
     }
     return n==1;
    }
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isPowerOfTwo(n))
    {
        cout << n << " is a power of two." << endl;
    }
    else
    {
        cout << n << " is not a power of two." << endl;
    }
    return 0;
}