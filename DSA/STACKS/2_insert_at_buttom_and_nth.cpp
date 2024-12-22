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
    void insert_at_buttom(int n){
        Node*temp=this->head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        Node*new_node=new Node(n);
        temp->next=new_node;
        this->curr_size++;
        
    }
    void insert_at_nth(int pos,int num){
        Node*temp=this->head;
        Node* prev;
        for(int i=0;i<(5-pos+1);i++){
            prev=temp;
            temp=temp->next;
        }
        Node* new_node=new Node(num);
        prev->next=new_node;
        new_node->next=temp;
    }
};

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
    st1.insert_at_buttom(0);
    st1.showall();
    st1.insert_at_nth(3,10);
    st1.showall();
    return 0;
    }
