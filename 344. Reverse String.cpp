#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 void reverseString(vector<char>& s) {
       reverse(s.begin(),s.end()); 
       for(char i: s)
       {
        cout<<i;
       }
    }

int main()
{
    // vector<char> vec="hello";
    vector<char> vec ={'h','e','l','l','o'};
    reverseString(vec);
    return 0;
}