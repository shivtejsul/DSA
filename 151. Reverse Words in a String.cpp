#include<iostream>
#include<string>
#include<deque>
#include<sstream>
using namespace std;
string reverseWords(string s) {
  deque<string>d;
  stringstream ss(s);
  string world,result;
  while(ss >> world)
  {
     d.push_front(world);
  }
  while(!d.empty())
  {
    result +=d.front();
    d.pop_front();
    if(!d.empty())
    {
        result+=" ";
    }
  }
    return result;
}
int main()
{
    string s;
    getline(cin,s);
    cout<<reverseWords(s);
    return 0;
}