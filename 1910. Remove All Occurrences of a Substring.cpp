#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string removeOccurrences(string s, string part) {
 int sub=s.find(part);
//  int l=s.length()-part.length();
 while(sub>=0 && sub<s.length()) 
 {
    s.erase(sub,part.length());
    sub=s.find(part);
 }
 return s;
}
int main()
{
   string s,part;
   s="daabcbaabcbc";
   part="abc";
    string result = removeOccurrences(s, part);
    cout << "Result: " << result << endl;
    return 0;
}