#include <iostream>
#include <vector>
#include <algorithm>
using namespace std   ;

class Solution 
{
 public:
    int maxArea(vector<int>& height)
    {
        int start = 0  ;
        int end = height.size() - 1  ;
        int max_area = 0 ;
        while (start < end) {
            int width = end - start ;
            int h = min(height[start], height[end]) ;
            max_area = max(max_area, width * h)  ;
            if (height[start] < height[end])
            {
                start++  ;
            }
            else
            {
                end-- ;
            }
        }
        return max_area  ;
    }
};

int main() {
    Solution sol;
    vector<int> height = {1 , 8 , 6 , 2 , 5 , 4 , 8 , 3 , 7 }  ;
    cout << "Max Area: " << sol.maxArea(height) << endl ;
    return 0 ;
}
