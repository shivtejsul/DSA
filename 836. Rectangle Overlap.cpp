#include <iostream>
#include <vector>

using namespace std;

bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
    return !(rec1[2] <= rec2[0] || rec1[3] <= rec2[1] || rec1[0] >= rec2[2] || rec1[1] >= rec2[3]);
}

int main() {
    // Define two rectangles as vectors
    vector<int> rec1 = {0, 0, 2, 2}; // Bottom-left (0,0), top-right (2,2)
    vector<int> rec2 = {1, 1, 3, 3}; // Bottom-left (1,1), top-right (3,3)
    
    // Check if the rectangles overlap
    if (isRectangleOverlap(rec1, rec2)) {
        cout << "The rectangles overlap." << endl;
    } else {
        cout << "The rectangles do not overlap." << endl;
    }

    return 0;
}
