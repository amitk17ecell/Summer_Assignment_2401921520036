#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty()) return result;

        int top = 0, bottom = matrix.size() - 1;
        int left = 0, right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {
            // Traverse from Left to Right
            for (int j = left; j <= right; j++)
                result.push_back(matrix[top][j]);
            top++;

            // Traverse from Top to Bottom
            for (int i = top; i <= bottom; i++)
                result.push_back(matrix[i][right]);
            right--;

            // Traverse from Right to Left
            if (top <= bottom) {
                for (int j = right; j >= left; j--)
                    result.push_back(matrix[bottom][j]);
                bottom--;
            }

            // Traverse from Bottom to Top
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    result.push_back(matrix[i][left]);
                left++;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> matrix = {
        {1, 52, 13},
        {4, 15, 10},
        {7, 28, 19}
    };

    vector<int> spiral = sol.spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int num : spiral) cout << num << " ";
    cout << endl;

    return 0;
}
