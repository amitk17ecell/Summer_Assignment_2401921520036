//                                                       Q.  TWO SUM 
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int k = 0; k < nums.size(); k++) {
            for(int j = k + 1; j < nums.size(); j++) {
                if(nums[k] + nums[j] == target) {
                    return {k, j};
                }
            }
        }
        return {};
    }
};
int main() 
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    Solution obj;
    vector<int> result = obj.twoSum(nums, target);

    cout << "Indices: ";
    for(int index : result)
     {
        cout << index << " ";
     }

    return 0;
}