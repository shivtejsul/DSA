#include<iostream>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;
string compressedString(string word) {
 unordered_map<char,int>map;
 string result;
 int n=word.length()-1,i=0;
 for(auto i:word)
 {
    map[i]++;
 } 
for(auto i:word)
{
    int count=map[i];
    if(map[i]!= 0){
          while (count > 9) {
                result += "9";
                result += i;
                count -= 9;
            }
      if(count > 0){ 
    result+=to_string(count);
    result+=i;
    map[i]=0;
    }    
    }
}
 
 return result;
}

int main()
{
    string s;
    cin>>s;
    cout<<compressedString(s);
    return 0;
}