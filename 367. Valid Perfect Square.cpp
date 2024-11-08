#include<iostream>
#include<typeinfo>
using namespace std;
bool isPerfectSquare(int num) {
  for(int i=0;i<=num;i++){
    if(i*i==num)
    {
        if(typeid(i)==typeid(int))
        {
            return true;
        }
    }
  } 
  return false;     
}

int main(){
    int no;
    cin>>no;
    cout<<isPerfectSquare(no);
    return 0;
}