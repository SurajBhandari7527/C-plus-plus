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

void next_greater(int* ptr, int* ptr2,Stack* st_ptr,int n){
    st_ptr->push(0);
    for(int i=1;i<n;i++){
        
        while (!st_ptr->isEmpty() and ptr[st_ptr->head->val]<ptr[i]){
                ptr2[st_ptr->head->val]=ptr[i];
                st_ptr->pop();
           
        }
            
      
        st_ptr->push(i);
    }

}

int main(){

    // Stack st1(10);
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int *ptr=new int[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>ptr[i];
    }
    int*ptr2=new int[n];
       for(int i=0;i<n;i++){
        ptr2[i]=-1;
    }
    Stack st_new(7);
    Stack* st_ptr=&st_new;
    next_greater(ptr,ptr2,st_ptr,n);
    for(int i=0;i<n;i++){
        cout<<ptr2[i]<<"\t";
    }
    return 0;
    }
