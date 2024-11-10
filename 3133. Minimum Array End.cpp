#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long minEnd(int n, int x) {
    long result = x;
    long remaining = n - 1;
    long position = 1;
    
    while (remaining) {
        if (!(x & position)) {
            result |= (remaining & 1) * position;
            remaining >>= 1;
        }
        position <<= 1;
    }
    
    return result;

}

int main() {
    int n1 = 3, x1 = 4;
    int result1 = minEnd(n1, x1);
    cout << "Output for (n = 3, x = 4): " << result1 << std::endl;

       
    return 0;
}
