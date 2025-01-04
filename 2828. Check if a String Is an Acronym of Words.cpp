#include<iostream>
#include<string>
#include<vector>
using namespace std;
 bool isAcronym(vector<string>& words, string s) {
   string ans;
   for(int i=0;i<words.size();i++)
   {
        ans+=words[i][0];
   } 
   return ans == s;    
}
int main()
{
    vector<string>words={"alice","bob","charlie"};
    string s= "abc";
    cout<<isAcronym(words,s);

    return 0;
}