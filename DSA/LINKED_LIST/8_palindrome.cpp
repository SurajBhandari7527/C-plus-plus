// check whether the given linked list is palindrome or not
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
void insert_at_tail(Node* head,int n){
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next; }
    Node*node=new Node(n);
    temp->next=node;
}
void show(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void check_palindrome(Node*head){
    Node* temp1=head;
    int count=1;
    while(temp1->next!=0){
        count++;
        temp1=temp1->next;
    }
    temp1=head;
    Node*prev=NULL;
    Node*traverse=head;
    bool pal=true;
    for(int i=0;i<count/2;i++){
        traverse=traverse->next;
        temp1->next=prev;
        prev=temp1;
        temp1=traverse;
    }
    Node*head1=prev;
    Node* head2=temp1->next;
    for(int i=0;i<count/2;i++){
        if(head1->val!=head2->val){
            pal=false;
        }
        head1=head1->next;
        head2=head2->next;

    }
    if(pal==false){
        cout<<"It is not palindrome."<<endl;
    }
    else{
        cout<<"It is a palindrome."<<endl;
    }
}
int main(){
Node* head=new Node(1);
insert_at_tail(head,2);
insert_at_tail(head,3);
insert_at_tail(head,4);
insert_at_tail(head,5);
insert_at_tail(head,4);
insert_at_tail(head,3);
insert_at_tail(head,2);
insert_at_tail(head,1);

show(head);
check_palindrome(head);
    return 0;
}