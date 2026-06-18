#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    unordered_map<int,int> mp;
    stack<int> st;
    
    for(int num : nums2) {
        while(!st.empty() && st.top() < num) {
            mp[st.top()] = num;
            st.pop();
        }
        st.push(num);
    }
    
    vector<int> ans;
    for(int num : nums1) {
        ans.push_back(mp.count(num) ? mp[num] : -1);
    }
    return ans;
}

int main() {
    vector<int> nums1 = {4,1,2};
    vector<int> nums2 = {1,3,4,2};
    
    vector<int> result = nextGreaterElement(nums1, nums2);
    
    cout << "Next Greater Elements: ";
    for(int x : result) cout << x << " ";
    cout << endl;
    
    return 0;
}
