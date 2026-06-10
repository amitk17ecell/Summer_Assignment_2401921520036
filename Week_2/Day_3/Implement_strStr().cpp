#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        
        if(m == 0) return 0; // empty needle case
        
        for(int i = 0; i <= n - m; i++) {
            if(haystack.substr(i, m) == needle) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    
    string haystack, needle;
    cout << "Enter haystack string: ";
    cin >> haystack;
    cout << "Enter needle string: ";
    cin >> needle;
    
    int result = sol.strStr(haystack, needle);
    cout << "Index of first occurrence: " << result << endl;
    
    return 0;
}
