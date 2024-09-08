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
void compare_value_2_ptr(Node *temp1, Node *temp2)
{   while(temp1!=NULL){
    if(temp1->val==temp2->val){
    cout<<"The linked list are intersecting at the element "<<temp1->val<<endl;
    break;
}
    temp1=temp1->next;
    temp2=temp2->next;
}
}
void check(Node *head1, Node *head2)
{   Node* temp1=head1;
    Node* temp2=head2;
    int count1 = 0;
    int count2 = 0;
    int diff;
    while (temp1 != NULL)
    {count1 += 1;
    temp1=temp1->next;}

    while (temp2 != NULL)
    {count2 += 1;
     temp2=temp2->next;}

     //reset pointers 
     temp1=head1;
     temp2=head2;

    if (count2 > count1)
        {diff = count2 - count1;
        for (int i = 0; i < diff; i++)
        {temp2 = temp2->next;}
        }

    else
        {diff = count1 - count2;
        for (int i = 0; i < diff; i++)
        {temp1 = temp1->next;}
        }
     compare_value_2_ptr(temp1, temp2);


}
void insert_ll1_to_ll2(Node *head2, Node *pos_of_ll1)
{
    Node *temp1 = pos_of_ll1;
    Node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}
int main()
{
    Node *head1 = new Node(1);
    insert_at_tail(head1, 2);
    insert_at_tail(head1, 3);
    insert_at_tail(head1, 4);
    insert_at_tail(head1, 5);
    insert_at_tail(head1, 6);
    show(head1);
    Node *head2 = new Node(0);
    insert_at_tail(head2, 7);
    insert_at_tail(head2, 8);
    insert_at_tail(head2, 9);
    insert_at_tail(head2, 10);
    insert_ll1_to_ll2(head2, head1->next->next->next);
    show(head2);

    check(head1, head2);
    return 0;
}