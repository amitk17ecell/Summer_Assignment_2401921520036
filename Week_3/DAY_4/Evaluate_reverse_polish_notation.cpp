#include <bits/stdc++.h>
using namespace std;

int evalRPN(vector<string>& tokens) {
    stack<int> st;
    for (string &t : tokens) {
        if (t == "+" || t == "-" || t == "*" || t == "/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            if (t == "+") st.push(a + b);
            else if (t == "-") st.push(a - b);
            else if (t == "*") st.push(a * b);
        } else {
            st.push(stoi(t)); 
        }
    }
    return st.top();
}
int main() {
    vector<string> tokens = {"2","1","+","3","*"};
    cout << "Result: " << evalRPN(tokens) << endl;
    vector<string> tokens2 = {"4","13","5","/","+"};
    cout << "Result: " << evalRPN(tokens2) << endl ;

    return 0 ;

}
