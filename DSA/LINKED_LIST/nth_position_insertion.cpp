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
void insertion_at_nth(Node* &head,int n){
    Node* node =new Node(n);
    int pos;
    cout<<"Enter the position: "<<endl;
    cin>>pos;
    Node* temp=head;
    int i=1;
    while(i!=pos-1){
        temp=temp->next;
        i++;

    }
    Node*temp2=temp->next;
    temp->next=node;
    node->next= temp2;

}
int main(){
    Node* head=new Node(1);
    insertion_at_last(head,2);
    insertion_at_last(head,3);
    insertion_at_nth(head,4);

    show(head);
    return 0;
}