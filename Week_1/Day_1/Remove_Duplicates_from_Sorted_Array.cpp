//                              Q.    Remove Duplicates from Sorted Array 

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0;
        }

        int a = 0;  // Points to last unique element

        for(int j = 1; j < nums.size(); j++) {
            if(nums[j] != nums[a]) {
                a++;
                nums[a] = nums[j];
            }
        }

        return a + 1;
    }
};

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter sorted array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int k = obj.removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;

    cout << "Array after removing duplicates: ";
    for(int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}