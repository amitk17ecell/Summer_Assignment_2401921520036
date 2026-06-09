#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (s.size() < p.size()) return result;

        vector<int> freqP(26, 0), freqS(26, 0);

        // Count frequency of p and first window of s
        for (int i = 0; i < p.size(); i++) {
            freqP[p[i] - 'a']++;
            freqS[s[i] - 'a']++;
        }

        // Sliding window
        for (int i = 0; i <= s.size() - p.size(); i++) {
            if (freqP == freqS) result.push_back(i);

            // Slide window: remove left char, add right char
            if (i + p.size() < s.size()) {
                freqS[s[i] - 'a']--;
                freqS[s[i + p.size()] - 'a']++;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    string s = "cbaebabacd", p = "abc";
    vector<int> ans = sol.findAnagrams(s, p);
    for (int idx : ans) cout << idx << " "; // Output: 0 6
    return 0;
}
