#include<iostream>
#include<string>
using namespace std;
 int lengthOfLastWord(string s) {
   int lengthOfLastWord(string s) {
    int n = s.size() - 1;
    int count = 0;

    
    while ( s[n] == ' ') {
        n--;
    }

    
    while (s[n] != ' ') {
        count++;
        n--;
    }

    return count;
}
    }
int main()
{  
    string s;
    getline (cin,s);
   cout<<lengthOfLastWord(s)<<endl;

    return 0;
}