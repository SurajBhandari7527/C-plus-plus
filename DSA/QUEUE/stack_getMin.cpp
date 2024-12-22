#include <iostream>
#include <stack>
using namespace std;
class solution
{
    stack<int> stk;
    int minimum;

public:
    void push(int value)
    {
        if (stk.empty())
        {
            this->minimum = value;
            stk.push(value);
            return;
        }
        int difference = value - minimum;
        if (difference < 0)
        {
            this->minimum = value;
            stk.push(difference);
        }
        
        else
        {
            stk.push(difference);
        }
    }
    void pop()
    {
        if (stk.top() >= 0)
        {
            stk.pop(); 
        }
        else
        {
            this->minimum = this->minimum - stk.top();
            stk.pop();
        }
    }
    int Top()
    {
        if (stk.top() < 0)
            return minimum;
        else
            return this->minimum + stk.top();
    } 
};
int main()
{
    solution s1;
    s1.push(2);
    s1.push(-1);
    s1.push(3);
    s1.push(2);
    s1.push(-3);
    s1.push(4);
    cout << s1.Top()<<endl  ;
    s1.pop();
    cout << s1.Top();
    return 0;
}