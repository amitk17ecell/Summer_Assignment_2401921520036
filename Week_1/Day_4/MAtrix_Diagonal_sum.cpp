#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int value = 0   ;
        for (int i = 0; i < n; ++i) {
            value += mat[i][i];             
            value += mat[i][n - 1 - i]  ;    
        }
        if (n % 2 == 1) value -= mat[n / 2][n / 2]  ;
        return value ;
    }
};

int main()
{
    Solution sol;

    // Example matrix
    vector<vector<int>> mat = 
    {
        {2, 9, 3},
        {4, 6, 6},
        {7, 8, 10}
    }  ;

    cout << "Diagonal Sum value :  = " << sol.diagonalSum(mat) << endl;

    return 0;
}
