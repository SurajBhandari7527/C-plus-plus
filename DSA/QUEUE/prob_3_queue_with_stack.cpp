#include<iostream>
#include<stack>
using namespace std;
class Queue{                                         //pop efficient 
    stack <int> st;
    stack <int> st2;
    int back;
    public:
    void push(int val){  
        back=val;
        
      
            while(st2.size()>0){
                this->st.push(st2.top());
                st2.pop();
            }
            this->st.push(val);
            while(this->st.size()>0){
                st2.push(this->st.top());
                this->st.pop();
            }
        
        
    }
    void pop_ele(){
    st2.pop();
    }
    bool empty(){
        return st2.empty();

    }

    int size(){
        return st2.size();

    }
    int front_ele(){
    return st2.top();
    }
    int back_(){
        return this->back;
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
    cout<<q.back_();
    

    return 0;
}