#include<iostream>
using namespace std;
class Node{
    public:
    Node*next;
    int val;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
class deque{
    Node* front;
   Node* back;
   int size;
   public:
    deque(){
        this->front=NULL;
        this->back=NULL;
        this->size=0;
    }

    void push_front(int val){
       
        Node* new_node= new Node(val);
        new_node->next=this->front;
        this->front=new_node;
         if(this->front->next==NULL){
            this->back=front;
        }
        size++;
    
    }
    void pop_front(){
        Node* temp=front;
        front=front->next;
        delete temp;
        size--;
    }
    void push_back(int val){
        Node* new_node=new Node(val);
        Node* temp=front;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
        new_node->next=NULL;
        this->back=new_node;
        size++;
    }
    
    void pop_back(){
        Node*temp=front;
        Node* temp2;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        temp2=temp;
        temp->next=NULL;
        delete temp2->next;
        size--;
    }

    int front_ele(){
        return this->front->val;
    }

    bool empty(){
       return this->size==0;
    }
};
int main(){
    deque d;
    d.push_front(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_back(5);
    d.push_back(6);
    d.pop_back();
    d.pop_front();
    for(int i=0;i<4;i++){
        cout<<d.front_ele();
        d.pop_front();
    }

    
    
    

    return 0;
}