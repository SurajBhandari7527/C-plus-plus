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


void del_duplicate(Node* &head){
    Node* temp=head;
    Node* next=head->next;
    Node* to_del;
    int i=1;
    while(next!=NULL){
            if(next->val==temp->val)
            {
            temp->next=next->next;
            to_del=next;
            next=next->next; 
            free(to_del);
            }
            else{
                temp=next;
            next=next->next;
            
            }

        
        }
       
        
    }


int main(){
    Node* head=new Node(1);
    insertion_at_last(head,2);
    insertion_at_last(head,2);
    insertion_at_last(head,2);
    insertion_at_last(head,3);
    insertion_at_last(head,4);
    insertion_at_last(head,4);
    // show(head);
    del_duplicate(head);
    show(head);

    return 0;
}