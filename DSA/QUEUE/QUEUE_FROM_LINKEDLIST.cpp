#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class Queue{
    Node*front;
    Node*rear;
    int capacity;
    

    public:
    Queue(int c){
        this->capacity=c;
        this->front=NULL;
        this->rear=NULL;}
    
    void enque(int val){
        if(isFull()) return;
        Node* new_node= new Node(val);
        if(this->front==NULL){
            this->front=new_node;
            this->rear=new_node;
        }
        else{
        this->rear->next=new_node;
        this->rear=new_node;
        
        }
    }

    void show(){
        Node*temp=this->front;
        while(temp!=NULL){
            cout<<temp->val<<"\t";
            temp=temp->next;
        }
    }

    void deque(){
        if(isEmpty()) return;
        Node* temp=this->front;
        this->front=temp->next;
        delete temp;
    }
    bool isFull(){
        int i=0;
        Node*temp=this->front;
        while(temp!=NULL){
            i++;
        }
        return i==this->capacity;
    }
    bool isEmpty(){
        return this->front==NULL;
    }
};
int main(){
    Queue q1(3);
    q1.enque(1);
    q1.enque(2);
    q1.enque(3);
    q1.show();
    cout<<endl;
    q1.deque();
    q1.show();
    return 0;
}