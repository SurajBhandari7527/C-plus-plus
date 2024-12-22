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
    public:
    Node* head;
    int curr_size;
    int max_size;
    
    Stack(int size){
        this->max_size=size;
        this->curr_size=0;
        this->head=NULL;
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
        this->curr_size++;
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
            this->curr_size--;
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
    void showall(){
        Node*temp=this->head;
        while(temp!=NULL){
        
        cout<<temp->val<<endl;
        temp=temp->next;
        }

    }
};
void copy(Stack* &ptr1, Stack* &ptr2){
    Node* temp=ptr1->head;
    while(temp!=NULL){
        
        ptr2->push(temp->val);
        temp=temp->next;

    }

}
int main(){
    Stack st1(5);
    Stack* ptr1= & st1;
    st1.push(1);
    st1.seek();
    st1.push(2);
    st1.seek();
    st1.push(3);
    st1.seek();
    st1.push(4);
    st1.seek();
    st1.push(5);
    st1.seek();
    st1.showall();
    // copy the stack. 
    //We will use two stacks to do this. beacause copying to one stack will make
    // it reverse order copy while if we do it two times using two stacks it will be copied perfectly
    Stack st2(5);
    Stack * ptr2=&st2;
    copy(ptr1,ptr2);
    Stack st3(5);
    Stack * ptr3=&st3;
    copy(ptr2,ptr3);
    delete ptr2;
    st3.showall();

    return 0;
    }
