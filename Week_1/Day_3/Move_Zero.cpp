#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int non_zero = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[non_zero++] = nums[i];
            }
        }
        for (int i = non_zero; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12};

    sol.moveZeroes(nums);

    cout << "Result: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
