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
void find_middle(Node* head){
        Node*temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp=head;
        for(int i=0;i<count/2 ;i++){
            temp=temp->next;
        }
        cout<<"\nThe middle element is: "<<temp->val<<endl;
}
int main(){
    Node* head=new Node(1);
    insertion_at_last(head,2);
    insertion_at_last(head,3);
    insertion_at_last(head,4);
    insertion_at_last(head,5);
    insertion_at_last(head,6);
    
    show(head);
    find_middle(head);
    return 0;
}