#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int compress(vector<char>& chars) {
    int read=0;
    int write=0;
   while(read<chars.size())
   {
      char current=chars[read];
      int count=0;

      while(read<chars.size() && current==chars[read])
      {
        read++;
        count++;
      }
      chars[write++]=current;
     if(count>1)
     {
        for(char c:to_string(count))
        {
            chars[write++]=c;
        }  
     }

   } 
   return write;   
}
int main(){
   vector<char>vec={'a','a','b','b','c','c','c'};
   cout<<compress(vec);
   return 0;
}