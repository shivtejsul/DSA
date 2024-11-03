#include<iostream>
#include<string>
using namespace std;
bool rotateString(string s, string goal) {
  string s1 ;
  s1=s+s;
  if(s1.find(goal)<s1.length() && s.length()==goal.length())
  {
    return true;
  } 
  return false;     
}
int main()
{
  string s,goal;
  cin>>s>>goal;
  cout<<rotateString(s,goal);
    return 0;
}