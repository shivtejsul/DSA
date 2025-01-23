#include<iostream>
#include<set>
#include<string>
using namespace std;
 bool checkIfPangram(string sentence) {
 set<char>ans;
 for(auto i:sentence)
 {
    ans.insert(i);
 } 
 return ans.size()==26;      
}
int main()
{
     string sentence = "thequickbrownfoxjumpsoverthelazydog";
     cout<<checkIfPangram(sentence);
     return 0;
}