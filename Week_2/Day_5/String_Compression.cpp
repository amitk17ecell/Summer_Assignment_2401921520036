#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index = 0    ; 

        for (int i = 0; i < n; ) {
            char current = chars[i];
            int count = 0    ;
            while (i < n && chars[i] == current) 
            {
                i++;
                count++;
            }
            chars[index++] = current;
            if (count > 1) {
                string cnt = to_string(count);
                for (char c : cnt) {
                    chars[index++] = c       ;
                }
            }
        }
        return index   ; 
    }
};

int main() 
{
    Solution sol;
    vector<char> chars = {'a','a','b','b','c','c','c'};
    
    int newLength = sol.compress(chars);

    cout << "Compressed Length: " << newLength << endl;
    cout << "Compressed Array: ";
    for (int i = 0; i < newLength; i++) 
    {
        cout << chars[i] << " ";
    }
    cout << endl   ;

    return 0   ;
}
