#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
 vector<string> findWords(vector<string>& words) {
    vector<string> result;
    string s1 = "qwertyuiop", s2 = "asdfghjkl", s3 = "zxcvbnm";

    for (string word : words) {
       
        string lowerWord = word;
        transform(lowerWord.begin(), lowerWord.end(), lowerWord.begin(), ::tolower);

      
        bool inRow1 = true, inRow2 = true, inRow3 = true;
        for (char c : lowerWord) {
            if (s1.find(c) == string::npos) inRow1 = false;
            if (s2.find(c) == string::npos) inRow2 = false;
            if (s3.find(c) == string::npos) inRow3 = false;
        }

        
        if (inRow1 || inRow2 || inRow3) {
            result.push_back(word);
        }
    }

    return result;
}