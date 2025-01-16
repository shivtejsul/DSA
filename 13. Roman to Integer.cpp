#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
using namespace std;
int romanToInt(string s) {
  vector<int>store;
  int ans=0;
  unordered_map<char,int>value;
  value['I']=1;
  value['V']=5;
  value['X']=10;
  value['L']=50;
  value['C']=100;
  value['D']=500;
  value['M']=1000;
 for (size_t i = 0; i < s.size(); ++i) {
        
        if (i + 1 < s.size() && value[s[i]] < value[s[i + 1]]) {
            ans -= value[s[i]];
        } else {
           
            ans += value[s[i]];
        }
        
    }
    return ans;
}
int main()
{
    string s="III";
    cout<<romanToInt(s);
    return 0;
}