#include<iostream>
#include<string>
#include<map>
using namespace std;
string makeFancyString(string s) {
    string result;
    int count;

    for (int i = 0; i < s.size(); i++) {
        
        if (i > 0 && s[i]==s[i-1]) {
           
            count++;
        } else {
          
            count=1;
        }
        if(count<=2)
        {
            result+=s[i];
        }
    }

    return result;
}
int main()
{
    string s;
    cin>>s;
    cout<<makeFancyString(s);
    return 0;
}