#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // for count function
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxSize = 0;
        for (auto& sentence : sentences) {
            int wordCount = count(sentence.begin(), sentence.end(), ' ') + 1;
            maxSize = max(maxSize, wordCount);
        }
        return maxSize;
    }
};

int main() {
    // Example test case
    vector<string> sentences = {
        "Hello world",
        "This is a test",
        "Another example sentence here",
        "Shortest sentence"
    };

    Solution solution;
    int result = solution.mostWordsFound(sentences);

    cout << "The maximum number of words in a sentence is: " << result << endl;

    return 0;
}
