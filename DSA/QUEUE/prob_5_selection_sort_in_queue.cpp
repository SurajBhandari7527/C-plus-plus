// sorting queue using one stack
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    queue<int> res;
    stack<int> st;

    q.push(4);
    q.push(2);
    q.push(3);
    q.push(1);

    int n = q.size();
    for (int i = 0; i < n; i++)
    {
        st.push(q.front());
        q.pop();
        while (!q.empty())
        {
            if (st.top() < q.front())
            {
                res.push(st.top());
                st.pop();
                st.push(q.front());
                q.pop();
            }
            else
            {
                res.push(q.front());
                q.pop();
            }
        }
        res.push(st.top());
        st.pop();
        res.swap(q);
    }

    cout << q.front() << endl;
    q.pop();

    cout << q.front() << endl;
    q.pop();

    cout << q.front() << endl;
    q.pop();

    cout << q.front() << endl;
    q.pop();

    return 0;
}