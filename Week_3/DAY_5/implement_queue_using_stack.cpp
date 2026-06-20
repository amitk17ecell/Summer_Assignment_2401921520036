#include <iostream>
#include <stack>
using namespace std;

class MyQueue {
private:
    stack<int> s1, s2;

    void transfer() {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }

public:
    MyQueue() {}

    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s2.empty()) transfer();
        int val = s2.top();
        s2.pop();
        return val;
    }

    int peek() {
        if (s2.empty()) transfer();
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.peek() << endl; // should print 10
    cout << "Pop: " << q.pop() << endl;            // removes 10
    cout << "Front element: " << q.peek() << endl; // should print 20
    cout << "Is empty? " << (q.empty() ? "Yes" : "No") << endl;

    q.pop(); // removes 20
    q.pop(); // removes 30
    cout << "Is empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}
