#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    stack<int> st;
    stack<int> minSt;
public:
    MinStack() {}

    void push(int val) {
        st.push(val);
        if(minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    void pop() {
        if(st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};

int main() {
    MinStack ms;
    ms.push(-2);
    ms.push(0);
    ms.push(-3);
    cout << "Current Min: " << ms.getMin() << endl; // -3
    ms.pop();
    cout << "Top: " << ms.top() << endl;           // 0
    cout << "Current Min: " << ms.getMin() << endl; // -2
    return 0;
}
