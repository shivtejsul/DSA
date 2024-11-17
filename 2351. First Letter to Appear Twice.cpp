#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
char repeatedCharacter(string s) {
    string s1;
    char result;
    for(auto i:s)
    {
       
       if(s1.find(i)!=string::npos)
       {
        result=i;
        break;
       }
       else{
        s1+=i;
       }
    } 
    return result; 
}
int main()
{
    string s;
    cin>>s;
    cout<<repeatedCharacter(s);
    return 0;
}