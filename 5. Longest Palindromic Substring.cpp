#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string longestPalindrome(string s) {
    int n=s.length();
for (int len = n; len > 0; len--) { 
        for (int i = 0; i <= n - len; i++) { 
            string s1 = s.substr(i, len); 
            string s2 = s1; 
            reverse(s2.begin(), s2.end());
            if (s1 == s2) { 
                return s1; 
        }
    }

    
    return "";
}
}
int main()
{
    string s;
    cin>>s;
    cout<<longestPalindrome(s);
    return 0;
}