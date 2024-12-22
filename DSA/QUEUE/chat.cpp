#include <iostream>
#include <stack>
using namespace std;

class solution {
    stack<int> stk;
    int minimum;

public:
    void push(int value) {
        if (stk.empty()) {
            this->minimum = value;
            stk.push(0); // Store 0 because value == minimum
        } else {
            int difference = value - minimum;
            stk.push(difference); // Store difference
            if (difference < 0) {
                this->minimum = value; // Update minimum if new value is smaller
            }
        }
    }

    void pop() {
        if (stk.empty())
            return;

        int top = stk.top();
        stk.pop();

        // If the top is negative, it means the minimum was updated when this value was pushed
        if (top < 0) {
            this->minimum = this->minimum - top; // Restore the previous minimum
        }
    }

    int Top() {
        if (stk.empty())
            return -1; // Return -1 if stack is empty

        int top = stk.top();
        if (top < 0)
            return minimum; // The minimum is the actual top if top < 0
        else
            return minimum + top; // Otherwise, the top is an adjusted value
    }

    int getMin() {
        return minimum;
    }
};

int main() {
    solution s1;
    s1.push(2);
    s1.push(-1);
    s1.push(3);
    s1.push(2);
    s1.push(-3);
    s1.push(4);

    cout << "Top: " << s1.Top() << endl; // Should print 4
    s1.pop();
    cout << "Top: " << s1.Top() << endl; // Should print -3

    return 0;
}
