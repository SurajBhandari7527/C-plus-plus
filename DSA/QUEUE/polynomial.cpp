#include <iostream>
using namespace std;
class Node
{
public:
    int coefficient;
    int index;
    Node *next;
    Node(int coefficient, int idnex) : coefficient(coefficient), index(index) {}
};
class Polynomial
{
    Node *head;

public:
    Polynomial() {}
    void InsertAtTail(int coefficient, int index)
    {
        Node *new_node = new Node(coefficient, index);
        if (head == nullptr)
        {
            head = new_node;
        }
        else
        {
            Node *temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
    void display()
    {
        if (head == nullptr)
        {
            cout << "linked list is empty" << endl;
            return;
        }
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->coefficient << "x^" << temp->index << "+";
            temp = temp->next;
        }
        cout << endl;
    }
    void add(Polynomial const other)
    {
        Node* temp1=this->head;
        Node* temp2=other.head;
        while(temp1 and temp2)
        {
            if(temp1->index==temp2->index)
            {
                temp1->coefficient=temp1->coefficient+temp2->coefficient;
            }
        }
    }
};