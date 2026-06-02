
  //                                                     Q 53.   MAximum SubArray
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxCrossingSum(vector<int>& nums, int start, int mid, int end) {
        int leftSum = INT_MIN ;
        int Sum = 0 ;

        for (int i = mid; i >= start; i--) {
            Sum += nums[i];
            leftSum = max(leftSum, Sum);
        }

        int rightSum = INT_MIN;
        Sum = 0  ;

        for (int i = mid + 1; i <= end; i++) {
            Sum += nums[i];
            rightSum = max(rightSum, Sum)    ;
        }

        return leftSum + rightSum   ;
    }

    int solve(vector<int>& nums, int start, int end) {
        // Base Case
        if (start == end)
            return nums[start];

        int mid = start  + (end - start) / 2;      // this will avoid overflow we can also write mid = start+end /2 

        int leftMax = solve(nums, start, mid);
        int rightMax = solve(nums, mid + 1, end);
        int crossMax = maxCrossingSum(nums, start, mid, end);

        return max(max(leftMax, rightMax), crossMax);
    }

    int maxSubArray(vector<int>& nums) {
        return solve(nums, 0, nums.size() - 1);
    }
};

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    Solution obj;

    cout << "Maximum Subarray Sum = "
         << obj.maxSubArray(nums) << endl;

    return 0;
}