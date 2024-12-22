#include <iostream>
#include <queue>
#include<stack>
using namespace std;

int main(){
    queue <int> q;
    stack <int> st;
    int n,m;
    cout<<"Enter the number of elements: "<<endl;
    cin>>n;
    cout<<"Enter the elements of queue: "<<endl;
    for(int i=0;i<n;i++){
        cin>>m;
        q.push(m);
     
    }
    for(int i=0;i<n;i++){
   st.push(q.front());
   q.pop();}
   
    for(int i=0;i<n;i++){
   q.push(st.top());
   st.pop();}
   
   cout<<q.front()<<endl;
   q.pop();
  cout<< q.front()<<endl;
   q.pop();
 cout<<  q.front()<<endl;
   q.pop();
   cout<<q.front()<<endl;
  

    return 0;
}