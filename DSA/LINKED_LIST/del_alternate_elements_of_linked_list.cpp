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


void del_alternate(Node* &head){
    Node* temp=head;
    Node* prev;
    int i=1;
    while(temp!=NULL){
        if((i)%2 ==0){
            prev->next=temp->next;
            prev=temp;
        temp=temp->next;
        free(prev);
        i++;
        }
        else{
            prev=temp;
        temp=temp->next;
        i++;
        }
        
    }

}
int main(){
    Node* head=new Node(1);
    insertion_at_last(head,2);
    insertion_at_last(head,3);
    insertion_at_last(head,4);
    insertion_at_last(head,5);
    insertion_at_last(head,6);
    insertion_at_last(head,7);
    show(head);
    del_alternate(head);
    show(head);

    return 0;
}