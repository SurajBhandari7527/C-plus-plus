#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int value;
    Node* left;
    Node* right;
    Node(int val){
        left=NULL;
        right=NULL;
        value =val;
    }
};

Node* insertIntoBST(Node* root, int d) {
    if (root == nullptr) {
        return new Node(d);
    }
    if (d > root->value) {
        root->right = insertIntoBST(root->right, d);
    } else {
        root->left = insertIntoBST(root->left, d);
    }
    return root;
}

void levelOrdertraversal(Node*root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){

        Node*temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->value<<"\t";
            if(temp->left){
                q.push(temp->left);

            }
            if(temp->right){
                q.push(temp->right);
            }
        }

    }
}

Node* searchinBST(Node* root,int val){
    if(root->value==val){
        return root;
    }
   else if(root->value>val){
    searchinBST(root->left,val);
   }
   else if(root->value<val){
    searchinBST(root->right,val);
   }
}
Node* findmin(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;

}
Node* del(Node* root,int val){
    if(root==NULL) return NULL;

    if(val>root->value){
        root->right=del(root->right,val);
    }
    else if(val<root->value){
        root->left=del(root->left,val);

    }
    else{
        if(root->left==NULL){
            return root->right;
        }
        if(root->right==NULL){
            return root->left;
        }
        Node* min=findmin(root->right);
        root->value=min->value;
        root->right=del(root->right,min->value);

    }



}
int main(){
    Node* root=NULL;
    int value;
    for(int i=0;i<7;i++)
    {
    cout<<"enter value";
    cin>>value;
    root=insertIntoBST(root,value);
    }
    levelOrdertraversal(root);
    int val;
    //cout<<"Enter value to search:"<<endl;
    //cin>>val;
    //Node* search=searchinBST(root,val);
    //cout<<search->value;
    Node* min=findmin(root);
    cout<<min->value;
    //10 5 60 20 80 70 100 60 65
    del(root,60);
    levelOrdertraversal(root);
}