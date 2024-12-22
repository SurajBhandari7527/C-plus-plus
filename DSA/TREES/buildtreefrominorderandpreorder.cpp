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

void inorder(Node* temp){
    if(temp==NULL) return;
    inorder(temp->left);
    cout<<temp->val<<"\t";
    inorder(temp->right);

}
void preorder(Node* temp){
    if(temp==NULL) return;
    cout<<temp->val<<"\t";
    preorder(temp->left);
    preorder(temp->right);

}
void postorder(Node* temp){
    if(temp==NULL) return;
    postorder(temp->left);
    postorder(temp->right);
    cout<<temp->val<<"\t";

}
int find(int ele,int in[],int n){
    for (int i=0;i<n;i++){
        if(in[i]==ele){
            return i;
        }
    }
}

Node* maketree(int in[],int pre[],int& index,int inorderstart,int inorderend,int n){
    if(index>=n || inorderstart>inorderend){
        return NULL;
    }
    int element=pre[index++];
    int position=find(element,in,n);
    Node* root= new Node(element);

    root->left=maketree(in,pre,index,inorderstart,position-1,n);
    root->right=maketree(in,pre,index,position+1,inorderend,n);
    
}

int main() {
   int inorder[7]={4,5,3,10,2,6,1};
   int preorder[7]={10,5,4,3,6,2,1};
   int index=0;
   Node*root=maketree(inorder,preorder,index,0,7,7);
   postorder(root);
//10 5 4 -1 -1 3 -1 -1 6 2 -1 -1 1 -1 -1
    return 0;
}
