//                                          Q 217 . Contains Duplicate 

#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
 public:
    bool containsDuplicate(vector<int>& nums) {
        int count = 0;

        for (int i = 0 ; i < nums.size() ; i++)
        {
            for (int j = 1 ; j < nums.size() ; j++)
             {
                if (nums[j] == nums[i])
                    count++;
             }
        }

        if (count >= 2)
            return true;
        else
            return false;
    }
};

int main() 
{
    vector<int> nums = {14, 9 , 6 , 14} ;

    Solution obj ;

    if ( obj.containsDuplicate(nums) )
        cout << "true" << endl ;
    else
        cout << "false" << endl ;

    return 0 ;
}