#include<iostream>
#include<stack>
using namespace std;
void reverse(stack <int> st, stack <int> &st1){
    if(st.empty()) return ;
    int x=st.top();
    st.pop();
    reverse(st,st1);
    st1.push(x);

}
int main(){
    stack <int> st;
    stack <int> st1;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    reverse(st,st1);
    cout<<st1.top();
    st1.pop();
    cout<<st1.top();
    st1.pop();
    cout<<st1.top();
    st1.pop();
    cout<<st1.top();
    st1.pop();
    cout<<st1.top();
    st1.pop();

    return 0;
}