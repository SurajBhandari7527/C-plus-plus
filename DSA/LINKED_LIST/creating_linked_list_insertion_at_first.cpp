#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void Insert_at_head(Node* &head, int n) {
    Node* node2 = new Node(n);  // Create a new node with value n
    node2->next = head;         // Point the new node's next to the current head
    head = node2;               // Update head to point to the new node
}

void show(Node* head) {
    Node* temp = head;  // Start traversal from the head
    while (temp != NULL) {  // Traverse until the end of the list
        cout << temp->val << "->";  // Print the value of the current node
        temp = temp->next;  // Move to the next node
    }
    cout << "NULL" << endl;  // End of the list
}

int main() {
    Node* head = new Node(1);  // Create the first node with value 1
    Insert_at_head(head, 2);   // Insert value 2 at the head
    Insert_at_head(head, 3);   // Insert value 3 at the head

    show(head);  // Display the linked list

    return 0;
}
