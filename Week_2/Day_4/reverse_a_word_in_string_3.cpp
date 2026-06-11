#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string reverseWords(string s) 
    {
        int start = 0;
        for (int end = 0; end < s.size(); end++) 
        {
            if (s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }
        reverse(s.begin() + start, s.end());
        return s;
    }
};

int main() 
{
    Solution sol;
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    string result = sol.reverseWords(input);
    cout << "Output: " << result << endl;

    return 0;
}
