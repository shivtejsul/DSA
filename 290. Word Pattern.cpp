#include<iostream>
#include<string>
#include<sstream>
#include<map>
using namespace std;
bool wordPattern(string pattern, string s) {
  map<string,char>map0;
  map<char,string>map1;
  stringstream ss(s);
  string world;
  int i=0;
  while(ss >> world)
  {
    if(i==pattern.length())
    {
        return false;
    }
    char p=pattern[i];
    if(map0.count(world) && map0[world]!=p)
    {
        return false;
    }
    if(map1.count(p) && map1[p]!=world)
    {
       return false;
    }
    map0[world]=p;
    map1[p]=world; 
    i++; 
  }  
 return i==pattern.length();
}
int main()
{
    string s,s1;
    cin>>s>>s1;
    cout<<wordPattern(s,s1);

    return 0;
}