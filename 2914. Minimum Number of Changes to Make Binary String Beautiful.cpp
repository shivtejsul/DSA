#include<iostream>
#include<string>
using namespace std;
   int minChanges(string s) {
        int n = s.length();
        int count = 0;
        for (int i = 0; i < n-1; i=i + 2) {
            if (s[i] != s[i + 1]) {
                count++;
            }else continue;
        }
        return count;
    }

int main()
{
   string s;
   cin>>s;
   minChanges(s);
    return 0;
}