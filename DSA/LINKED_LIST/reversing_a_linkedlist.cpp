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
void insertion_at_last(Node* &head,int n){
    Node* node= new Node(n);
    Node* temp=head;
    
    while(temp->next!=0){
        temp=temp->next;
        
    }
    temp->next=node;
    
    

}

void show(Node* head){
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp->val<<"->";
    temp=temp->next;
    }
    cout<<"Null \n";

}


void reverse(Node* &head){
    Node* temp;
    Node* prev=NULL;
    Node* traverse=head;
    while(traverse!=NULL){
        temp=traverse;
        traverse=traverse->next;
        temp->next=prev;
        prev=temp;
        
    }
    head=temp;
}


int main(){
    Node* head=new Node(1);
    insertion_at_last(head,2);
    insertion_at_last(head,3);
    insertion_at_last(head,4);
    insertion_at_last(head,5);
    insertion_at_last(head,6);
    insertion_at_last(head,7);
    // show(head);
    reverse(head);
    show(head);

    return 0;
}