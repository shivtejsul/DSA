#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 bool isPalindrome(int x) {
  vector<int>vec;
  string s=to_string(x),s1;
  s1=s;
  reverse(s.begin(),s.end());
  return s==s1;      
}
int main()
{
    int i;
    cin>>i;
    cout<<isPalindrome(i);
    return 0;
}