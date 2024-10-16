#include<iostream>

#include<unordered_map>
#include<string>
using namespace std;

 int firstUniqChar(string s)
{ 
   unordered_map<char,int>freq;
   for(char i:s)
   {
      freq[i]++;
   }
   for(int i=0;i<s.size();i++)
   {
    if(freq[s[i]]==1)
    {
        return i;
    }
   }
   return -1;
 

}

int main()
{
    string s1;
    cout<<"Enter the string"<<endl;
    cin>>s1;
    cout<<firstUniqChar(s1);
    return 0;
}