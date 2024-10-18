#include<iostream>
#include<queue>
#include<string>
using namespace std;
bool repeatedSubstringPattern(string s) {
    string s1;
    int n;
   s1=s+s;
   s1.erase(s1.length()-1,1);
   s1.erase(0,1);
   return s1.find(s)!=string::npos;
        
    }

int main()
{
     string s;
     cout<<"Enter the string"<<endl;
     cin>>s;
     cout<<repeatedSubstringPattern(s);
   
    return 0;
}

