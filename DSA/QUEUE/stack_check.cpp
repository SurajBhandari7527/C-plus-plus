#include<iostream>
#include <queue>
using namespace std;
int main(){
    queue <int> q;
    queue <int> q1;
    q.push(1);
    q.push(2);
    cout<<q1.back();
    q1.push(3);
    cout<<endl;
    q1.swap(q);
    cout<<q1.back()<<endl;
    cout<<q.back()<<endl;
    return 0;
}