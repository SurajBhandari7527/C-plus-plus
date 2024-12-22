#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void reverse(queue<int> &q)
{
    if (q.empty())
        return;
    int x = q.front();
    q.pop();
    reverse(q);
    q.push
    cout << x << endl;
}

int main()
{
    queue<int> q;

    q.push(4);
    q.push(2);
    q.push(3);
    q.push(1);

   
    return 0;
}
