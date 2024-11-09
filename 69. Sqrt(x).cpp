#include<iostream>
#include<cmath>
using namespace std;
int mySqrt(int x) {
 int  n=sqrt(x);
 return n;       
}

int main(){
   int no;
   cin>>no;
   cout<<mySqrt(no);
    return 0;
}