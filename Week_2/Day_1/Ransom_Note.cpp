#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        vector<int> freq(26, 0);
        for (char c : magazine) 
        {
            freq[c - 'a']++;
        }
        for (char c : ransomNote) 
        {
            if (freq[c - 'a'] == 0) 
            {
                return false; // not enough letters
            }
            freq[c - 'a']--;
        }
        return true;
    }
};
int main() {
    Solution sol;
    cout << boolalpha << sol.canConstruct("a", "b") << endl;      
    cout << boolalpha << sol.canConstruct("aa", "ab") << endl;     
    cout << boolalpha << sol.canConstruct("aa", "aab") << endl;    
    return 0;
}
