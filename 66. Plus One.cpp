#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 vector<int> plusOne(vector<int>& digits) {
     int n = digits.size();
        
        // Traverse the digits from the end (least significant digit)
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                // If the current digit is less than 9, simply add 1 and return
                digits[i]++;
                return digits;
            }
            
            // If the current digit is 9, set it to 0 and continue
            digits[i] = 0;
        }
        
        // If all digits were 9, we need to add an extra 1 at the beginning (e.g., 999 + 1 = 1000)
        digits.insert(digits.begin(), 1);
        return digits;
    
 }
int main()
{
    vector<int> digits={4,3,2,9};
    plusOne(digits);
    for(int i : digits){
        cout<<"\t"<<i;
    }
   return 0;


}