#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;
bool isPalindrome(string s) {
    int j=s.size()-1,i=0;
    while(i<=j){
        if(isalnum(s[i]) && isalnum(s[j])){
            if(tolower(s[i]) != tolower(s[j])){
                return false;
            }
            i++;j--;
        }
        else if(isalnum(s[j])==false){
            j--;
        }else{
            i++;
        }
    }
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<isPalindrome(s);
    return 0;
}