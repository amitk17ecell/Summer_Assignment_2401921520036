#include <bits/stdc++.h>
using namespace std;

class Solution 
{
public:
    string decodeString(string s) 
    {
        stack<int> counts;
        stack<string> resultStack;
        string current = "";
        int k = 0;

        for (char c : s) 
        {
            if (isdigit(c)) 
            {
                k = k * 10 + (c - '0') ;
            } 
            else if (c == '[') 
            {
                counts.push(k);
                resultStack.push(current);
                k = 0;
                current = "";
            } 
            else if (c == ']') 
            {
                string temp = current;
                current = resultStack.top();
                resultStack.pop();
                int repeat = counts.top();
                counts.pop();
                while (repeat--) 
                {
                    current += temp;
                }
            } 
            else 
            {
                current += c;
            }
        }
        return current;
    }
};

int main() 
{
    Solution sol   ;
    string input   ;
    cout << "Enter encoded string: " ;
    cin >> input;

    string result = sol.decodeString(input) ;
    cout << "Decoded string: " << result << endl ;

    return 0 ;
}
