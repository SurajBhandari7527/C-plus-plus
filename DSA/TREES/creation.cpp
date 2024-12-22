#include<iostream>
using namespace std;
class node{
    public:
    int val;
    node* left;
    node* right;
    
    node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
node* insert(node* curr_node){
    int a;
    
    cout<<"current node: "<<curr_node->val<<endl;
    cout<<"Enter the left number: "<<endl;
    cin>>a;
    if((a==-1) )
    { return NULL; }
    node* new_node= new node(a);
    curr_node->left=new_node;
    curr_node=new_node;
    insert(curr_node);

    cout<<"Enter the right number: "<<endl;
    cin>>a;
    if((a==-1) )
    { return NULL; }
    new_node= new node(a);
    
}

int main(){int a;
    cout<<"Enter the root number: "<<endl;
    cin>>a;
    node* root = new node(10);
    insert(root);
    
}