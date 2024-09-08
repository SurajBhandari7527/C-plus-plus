/*Given head, the head of a linked list, determine if the linked list has a cycle in it.*/

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
    cout<<"Null";


}
void make_circle(Node*head,Node*link){
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=link;
}
void find_circle(Node* head){
    Node*temp=head;
    Node*prev;
    while(temp!=NULL){
        
        if(temp->val==-1){
            cout<<"Circle is present "<<endl;
            prev->next=NULL;
            break;

        }
        temp->val=-1;
        prev=temp;
        temp=temp->next;
        
    }

}

int main(){
    Node* head=new Node(1);
    insertion_at_last(head,2);
    insertion_at_last(head,3);
    insertion_at_last(head,4);
    insertion_at_last(head,5);
    insertion_at_last(head,6);
    make_circle(head,head->next->next->next);
    find_circle(head);
    show(head);
    return 0;
}