#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
                vector<int> freq1(26, 0), freq2(26, 0);
        for (int i = 0; i < s1.size(); i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }
        for (int i = 0; i <= s2.size() - s1.size(); i++) {
            if (freq1 == freq2) return true;
            if (i + s1.size() < s2.size()) {
                freq2[s2[i] - 'a']--;
                freq2[s2[i + s1.size()] - 'a']++;
            }
        }
        return false;
    }
};
int main() {
    Solution sol;
    string s1 = "ab", s2 = "eidbaooo";
    cout << (sol.checkInclusion(s1, s2) ? "true" : "false") << endl; 
    return 0;
}
