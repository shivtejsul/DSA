#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;
int longestPalindrome(string s){
    unordered_map<char, int> map;
    int count = 0;
    bool oddFound = false;

    for (auto i : s) {
        map[i]++;
    }

    for (auto i : map) {
        if (i.second % 2 == 0) {
            count += i.second;
        } else {
            count += i.second - 1;
            oddFound = true;
        }
    }

    
    if (oddFound) {
        count += 1;
    }

    return count;
}

int main()
{
    string s;
    cin>>s;
    cout<<longestPalindrome(s);

    return 0;
}