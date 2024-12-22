#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Stack{
    
    Node* head;
    int curr_size=0;
    int max_size;
    public:
    Stack(int size){
        this->max_size=size;
    }
    void push(int n){
        bool check=isFull();
        if(check){
            cout<<"The stack is full. Can't add"<<endl;
        }
        else{
             Node* new_node=new Node(n);
        Node* temp=this->head;
        head=new_node;
        head->next=temp;
        curr_size++;
        }
       
    }
    void pop(){
        bool check=isEmpty();
        if(check){
            cout<<"The stack is empty.Can't pop"<<endl;
        }
        else{
            Node* temp=head;
            head=head->next;
            delete temp;
            curr_size--;
        }
        
    }

    bool isEmpty(){
        return this->curr_size==0;
    }
    bool isFull(){
        return this->curr_size==this->max_size;
}
    void seek(){
        if(curr_size==0){
            cout<<"Stack is empty. Nothing to seek"<<endl;
        }
        else{
        cout<<head->val<<endl;}
    }
};
int main(){
    Stack st1(5);
    
    st1.push(1);
    st1.seek();
    st1.push(2);
    st1.seek();
    st1.push(3);
    st1.seek();
    st1.pop();
    st1.seek();
    st1.pop();
    st1.seek();
    st1.pop();
    st1.seek();
    st1.pop();
    
    return 0;
    }