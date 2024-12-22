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
class circular_queue{
    Node* front;
   Node* back;
   int size;
   public:
    circular_queue(){
        this->front=NULL;
        this->back=NULL;
        this->size=0;
    }


    void pop(){
        Node* temp=front;
        front=front->next;
        delete temp;
        size--;
    }
    void push(int val){
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
    
   

    int front_ele(){
        return this->front->val;
    }

    bool empty(){
       return this->size==0;
    }
};
int main(){
  

    
    
    

    return 0;
}