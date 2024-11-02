#include<iostream>
#include<string>
#include<sstream>
using namespace std;
bool isCircularSentence(string sentence) {
int n=sentence.size()-1;
if(sentence[0]!=sentence[n])
{
    return false;
}
for (int i=0;i<=n;i++)
{
    if(sentence[i]==' ')
    {
        if(sentence[i-1]!=sentence[i+1] )
        {
            return false;
        }
    }

}
 return true;
}
int main(){
    string s;
    getline(cin,s);
    cout<<isCircularSentence(s);
    return 0;
}