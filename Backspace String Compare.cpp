#include<iostream>
#include<stack>
using namespace std;
bool backspaceCompare(string s, string t) 
 {
    stack<int> stack1, stack2;
    int size1,size2;
     size1= s.length();
     size2= t.length();
     for(char c:s){
        cout<<int(c)<<"\t";
        stack1.push(c);
         if(stack1.top()==35)
        {
           stack1.pop();
           stack1.pop();
        }

     }
      for(char c:t){
        cout<<int(c)<<"\t";
        stack2.push(c);
         if(stack2.top()==35)
        {
           stack2.pop();
           stack2.pop();
        }

     }
     if(stack1==stack2)
     {
        return true;
     }
     else
     {
        return false;
     }

    }
int main()
{
   string s1,s2;
   cout<<"Enter String one:"<<endl;
   cin>>s1;
   cout<<"Enter String two:"<<endl;
   cin>>s2;
   cout<<backspaceCompare(s1,s2);
   


    return 0;
}