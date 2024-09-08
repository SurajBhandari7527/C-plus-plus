/* Given 2 linked lists, Tell if they are equal or not. Two linked lists are equal if they 
have the same data and the arrangement of data is also the same.*/

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
        Node* temp=head;
        Node* node= new Node(n);
      while(temp->next!=NULL){
        temp=temp->next;
      }
      temp->next=node;

    }
    void show(Node* head){
        Node*temp=head;
        while(temp!=NULL){
        cout<<temp->val<<"->";
        temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }
    int check_size(Node* head){
        Node*temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
    void check_value(Node* head1,Node* head2,int count){
        Node* temp1=head1;
        Node* temp2=head2;
        bool eq= true;
        for(int i=0;i<count;i++){
            if(temp1->val!=temp2->val){
                eq=false;
            }
            else{
                temp1=temp1->next;
                temp2=temp2->next;
            }
        }
        if(eq==true){
            cout<<"Linked lists are equal."<<endl;
        }
        else{
            cout<<"Linked lists are not equal."<<endl;
    
        }

    }
   void check_equal(Node* head1,Node* head2){
    int count1=check_size(head1);
    int count2=check_size(head2);
    if(count1!=count2){
        cout<<"Linked lists are not equal."<<endl;
    }
    else{
        check_value(head1,head2,count1);
    }
    
   }
int main(){
    Node* head1 =new Node(1);
    insert_at_tail(head1,2);
    insert_at_tail(head1,3);
    insert_at_tail(head1,4);
    insert_at_tail(head1,5);
    insert_at_tail(head1,6);
    show(head1);
    Node* head2 =new Node(1);
    insert_at_tail(head2,2);
    insert_at_tail(head2,3);
    insert_at_tail(head2,4);
    insert_at_tail(head2,5);
    insert_at_tail(head2,6);
    
    show(head2);
    check_equal(head1,head2);
    return 0;
}