#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};

int main() {
    Solution sol;
    cout << boolalpha << sol.isAnagram("anagram", "nagaram") << endl; // true
    cout << boolalpha << sol.isAnagram("rat", "car") << endl;         // false
    return 0;
}
