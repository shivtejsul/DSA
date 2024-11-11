#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
string finalString(string s) {
        string ans;
        for(auto i : s){
            if(i == 'i'){
                reverse(ans.begin(),ans.end());
            }else{
                ans += i;
            }
        }
        return ans;
    }
int main()
{
    string s;
    cin>>s;
    cout<<finalString(s);
    return 0;
}