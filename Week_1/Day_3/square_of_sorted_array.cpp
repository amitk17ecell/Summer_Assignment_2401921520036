#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& arr) {
        for (int i = 0; i < arr.size() ; i++) {
            arr[i] = arr[i] * arr[i] ;
        }
        sort(arr.begin(), arr.end()) ;
        return arr ;
    }
};

int main() {
    Solution sol  ;
    vector<int> arr = {-4, -1, 0, 3, 10}  ;

    vector<int> result = sol.sortedSquares(arr) ;

    cout << "output :  " ;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
