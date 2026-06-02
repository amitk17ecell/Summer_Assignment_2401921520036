//                                          Q 643 . Maximum average subarray 1 
#include <iostream>
#include <vector>
using namespace std  ;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        long long box_Sum = 0 ;

        for(int i = 0; i < k; i++) {
            box_Sum += nums[i]  ;
        }

        long long max_Sum = box_Sum ;

        for(int i = k; i < nums.size(); i++) {
            max_Sum = box_Sum + nums[i] - nums[i - k]  ;
            max_Sum = max(max_Sum, box_Sum) ;
        }

        return (double)max_Sum / k;
    }
};

int main() {
    vector<int> arr = {1, 16, -4, 6, -5, 30} ;
    int i = 4 ;

    Solution obj ;

    cout << obj.findMaxAverage(arr, i) << endl ;

    return 0   ;
}