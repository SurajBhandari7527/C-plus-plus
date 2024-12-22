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
    void see(){
        if(curr_size==0){
            cout<<"Stack is empty. Nothing to see"<<endl;
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
int isValid(string s,Stack st1){
    int count=0;
    for(int i=0;i<s.size();i++){
        if((s[i]=='(' ) or (s[i]=='{') or (s[i]=='[')){
            st1.push(s[i]);
            count++;
        }
        else{
            if(s[i]==')' and st1.head->val=='('){
                count--;
                Node* temp=st1.head;
                st1.head=st1.head->next;
                delete temp;
            }
            if(s[i]=='}' and st1.head->val=='{'){
                count--;
                Node* temp=st1.head;
                st1.head=st1.head->next;
                delete temp;
            }
            if(s[i]==']' and st1.head->val=='['){
                count--;
                Node* temp=st1.head;
                st1.head=st1.head->next;
                delete temp;
            }
        }
    }
    return count;
}

int main(){
    Stack st1(5);
   
    string s;
    cout<<"Enter the brackets:  "<<endl;
    cin>>s;
    int count=isValid(s,st1);
    if(count==0){
        cout<<"The brackets are correct"<<endl;
    }
    else{
        cout<<"The brackets are wrong"<<endl;
    }
    return 0;
    }
