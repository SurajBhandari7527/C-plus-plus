#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int v) {
        val = v;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root) {
    cout << "Enter the data: ";
    int data;
    cin >> data;
    if (data == -1) return NULL;  // Base case for empty node

    root = new Node(data);
    cout << "Enter the data for the left node of " << data << ": ";
    root->left = buildTree(root->left);  // Build left subtree
    cout << "Enter the data for the right node of " << data << ": ";
    root->right = buildTree(root->right);  // Build right subtree

    return root;
}

void levelOrderTraversal(Node* temp) {
    if (temp == nullptr)
        return;

    queue<Node*> q;
    q.push(temp);
    q.push(nullptr);  // To mark the end of a level

    while (!q.empty()) {
        Node* temp1 = q.front();
        q.pop();

        if (temp1 == nullptr) {
            cout << endl;
            if (!q.empty()) {
                q.push(nullptr);
            }
        } else {
            cout << temp1->val << "\t";
            if (temp1->left) {
                q.push(temp1->left);
            }
            if (temp1->right) {
                q.push(temp1->right);
            }
        }
    }
}

int main() {
    Node* root = nullptr;
    root = buildTree(root);
    levelOrderTraversal(root);
//10 5 4 -1 -1 3 -1 -1 6 2 -1 -1 1 -1 -1
    return 0;
}
