#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<set>
using namespace std;
int uniqueMorseRepresentations(vector<string>& words) {
 vector<string>apl={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

 set<string>s;
 for(auto i:words)
 {
     string ans;
    for(auto j:i)
    {
        
        ans+=apl[j-'a'];
    }
    s.insert(ans);
    
 } 
 return s.size();     
}
int main()
{
    vector<string>words = {"gin","zen","gig","msg"};
    cout<<uniqueMorseRepresentations(words);
    return 0;
}