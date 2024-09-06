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

// void head_del(Node* &head)
//     {
//     Node*temp=head;
//     head=head->next;
//     free(temp);

// }
void del_nth(Node* &head){
    Node* temp=head;
    Node* prev;
    int pos,i=1;
    cout<<"Enter the position of element to delete: "<<endl;
    cin>>pos;
    while(i!=pos){
        prev=temp;
        temp=temp->next;
        i++;
    }
    prev->next=temp->next;
    free(temp);


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
    // head_del(head);
    // show(head);
    del_nth(head);
    show(head);

    return 0;
}