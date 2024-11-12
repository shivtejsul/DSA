#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string sortVowels(string s) {
    string t,p;
    p=s;
    int n=s.size(),j=0;
    for(char i:s)
    {
        if(i=='a' || i=='e'|| i=='i'|| i=='o'|| i=='u'|| i=='A'|| i=='E'|| i=='I'|| i=='O'|| i=='U')
        {
            t+=i;
        }
        else{
            continue;
        }
    }
    sort(t.begin(),t.end()); 
    for(int i=0;i<n;i++)
    {
        if(p[i]=='a' || p[i]=='e'|| p[i]=='i'|| p[i]=='o'||p[i]=='u'|| p[i]=='A'|| p[i]=='E'|| p[i]=='I'|| p[i]=='O'|| p[i]=='U')
        {
            p[i]=t[j];
            j++;
        }
        else{
            continue;
        }
    }
    return p;
}
int main(){
    string s;
    cin>>s;
    cout<<sortVowels(s);
    return 0;
}