#include <iostream>
#include <vector>
#include <algorithm> // For std::reverse

using namespace std;

// Helper function to reverse each row in the matrix
void reverseRows(vector<vector<int>>& image) {
    for (auto& row : image) {
        reverse(row.begin(), row.end());
    }
}

// Function to flip and invert the binary matrix
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    int n = image.size();
    int m = image[0].size();

    // Reverse each row
    reverseRows(image);

    // Invert each element
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            image[i][j] = (image[i][j] == 0) ? 1 : 0;
        }
    }
    
    return image;
}

int main() {
    // Example matrix
    vector<vector<int>> image = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 0, 0}
    };

    // Perform flip and invert
    vector<vector<int>> result = flipAndInvertImage(image);

    // Output the resulting matrix
    cout << "Flipped and Inverted Matrix:" << endl;
    for (const auto& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
