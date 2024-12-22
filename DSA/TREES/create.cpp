#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int v){
        val=v;
        this->left=NULL;
        this->right=NULL;

    };


};


    Node* buildTree (Node* root){
        cout<<"Enter the data:"<<endl;
        int data;
        cin>>data;
        root= new Node(data);
        if(data==-1) return NULL;
        cout<<"Enter the data for the left node"<<endl;
        root->left=buildTree(root->left);
        cout<<"Enter the data for the right node"<<endl;
        root->right=buildTree(root->right);
    
    }

int main(){
    Node*root;
    buildTree (root);


}