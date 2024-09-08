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
        Node* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        return count;
    }
void del(Node* temp,Node* prev){
    prev->next=temp->next;
    free(temp);

}

void del_kth_from_last(Node* head,int count){
    Node* temp=head;
    Node* prev;
    int k;
    cout<<"Enter the kth position to delete from last: "<<endl;
    cin>>k;
    for(int i=1;i<(count-k+1);i++){
        prev=temp;
        temp=temp->next;
    }
    del(temp,prev);
}

int main()
{
    Node *head = new Node(1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    insert_at_tail(head, 6);
    show(head);
    int count_ll1=count(head);
    
    del_kth_from_last(head,count_ll1);
    show(head);
    return 0;
}
