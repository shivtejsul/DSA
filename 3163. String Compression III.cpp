#include<iostream>
#include<string>
using namespace std;
string compressedString(string word) {
 string s;
 int n=word.length(),i=0;
 while (i<n)
{
    int count=1;
    while (i+count<n && word[i]==word[i+count] && count<9 )
    {
        count++;
    }
    s+=to_string(count)+word[i];
    i += count;
}
return s;
}
int main()
{
    string s;
    cin>>s;
    cout<<compressedString(s);
    return 0;
}