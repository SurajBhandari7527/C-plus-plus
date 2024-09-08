/*Given 2 sorted linked lists, merge them into 1 singly linked list such that the.
resulting list is also sorted.*/
/* Given 2 linked lists, Tell if they are equal or not. Two linked lists are equal if they
have the same data and the arrangement of data is also the same.*/

#include <iostream>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *head, int n)
{
    Node *temp = head;
    Node *node = new Node(n);
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = node;
}
void show(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int count(Node* head){ 
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;

}
void merge(Node*head1,Node*head2){
    Node* temp1=head1;
    Node*temp2=head2;
    int count1=count(head1);
    cout<<count1<<endl;
    int count2=count(head2);
    cout<<count2<<endl;

    while((temp1!=NULL) && (temp2!=NULL)){
    if((temp1->val) > (temp2->val) && temp2!=NULL){
        cout<<temp2->val<<"->";
        temp2=temp2->next;
    }
    else if((temp1->val) < (temp2->val) && temp1!=NULL){
        cout<<temp1->val<<"->";
        temp1=temp1->next;
    }
    }
    
        while(temp1!=NULL){
            temp1=temp1->next;}
   
        while(temp2!=NULL){
            cout<<temp2->val<<"->";
            temp2=temp2->next; }
    cout<<"NULL"<<endl;

}
int main()
{
    Node *head1 = new Node(1);
    insert_at_tail(head1, 2);
    insert_at_tail(head1, 3);
    insert_at_tail(head1, 4);
    insert_at_tail(head1, 6);
    insert_at_tail(head1, 9);
    insert_at_tail(head1, 10);
    show(head1);
    Node *head2 = new Node(0);
    insert_at_tail(head2, 5);
    insert_at_tail(head2, 7);
    insert_at_tail(head2, 8);
    
    show(head2);

    merge(head1,head2);
    
    return 0;
}