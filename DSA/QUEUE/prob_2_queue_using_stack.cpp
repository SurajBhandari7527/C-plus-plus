#include<iostream>
#include<stack>
using namespace std;
class Queue{                                         //push efficient 
    stack <int> st;
    int front;
    public:
    void push(int val){  
        
    this->st.push(val);
    }
    void pop_ele(){
    stack <int> st2;
    while(this->st.size()>1){
        st2.push(this->st.top());
        this->st.pop();
    }
   
    this->st.pop();
    this->front=st2.top();
     while(st2.size()>0){
        this->st.push(st2.top());
        st2.pop();
    }
     
   
    }
    bool empty(){
        return this->st.empty();

    }

    int size(){
        return this->st.size();

    }
    int front_ele(){
    return this->front ;
    }
    int back(){
        return this->st.top();
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop_ele();
    cout<<q.front_ele();
    cout<<q.back();
    

    return 0;
}