#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
bool checkInclusion(string s1, string s2) {
    unordered_map<char,int>map,map1;
    int n=s1.length(),j;
    int n1= s2.length();
    if(n>n1) return false;
    for(auto i : s1)
    {
         map[i]++;
    }
    for(int i=0;i<n;i++)
    {
         map1[s2[i]]++;
    }
    if(map==map1)
    {
        return true;
    }
    for(int i=n;i<n1;i++)
    {
        map1[s2[i]]++;
        char a=s2[i-n];
        map1[a]--;
        if(map1[a]==0)
        {
            map1.erase(a);
        }
        if(map==map1)
        {
            return true;
        }
    }
        return false;

}
int main()
{
    string s1,s2;
    s1="ab";
    s2="eidboaoo";
    cout<<checkInclusion(s1,s2);
    return 0;
}