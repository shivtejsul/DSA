#include<iostream>
#include<set>
#include<unordered_map>
#include<string>
using namespace std;
 int lengthOfLongestSubstring(string s) {
    unordered_map<char,int>map;
    int left=0,max_count=0;
    for(int right=0;right<s.size();right++)
    {
      if(map.find(s[right])!=map.end() && map[s[right]]>=left)
      {
        left=map[s[right]]+1;
      }
      map[s[right]]=right;
      // max_count=max(max_count,right-left+1);
    }
    return map.size();
    // set<char>set;
    //  int max_count=INT16_MIN,count=0;
     
    //  if(s.size()==0)
    //  {
    //   return 0;
    //  }
    //  for(char i:s)
    //  {
    //    if(set.find(i)==set.end())
    //    {
    //       set.insert(i);
    //       count++;
    //    }
    //    else
    //    {
    //     set.clear();
    //     count=1;
    //     set.insert(i);
    //    }
    //    max_count=max(count,max_count);
    //  }
    //   return max_count;
    }
int main()
{
   string s;
   cout<<"Enter the string: "<<endl;
   cin>>s;
   cout<<lengthOfLongestSubstring(s);
    return 0;
}