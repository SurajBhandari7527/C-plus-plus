//make a BST using heapify and buldheap

#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        data = d;   
        left = right = NULL;
    }
    void inorder(){
        if(left) left->inorder();
        cout<<data<<" ";
        if(right) right->inorder();
    }
    void preorder(){
        cout<<data<<" ";
        if(left) left->preorder();
        if(right) right->preorder();
    }
    void postorder(){
        if(left) left->postorder();
        if(right) right->postorder();
        cout<<data<<" ";
    }
    int height(){
        int lh = left? left->height() : 0;
        int rh = right? right->height() : 0;
        return max(lh,rh)+1;
    }
    int size(){
        int ls = left? left->size() : 0;
        int rs = right? right->size() : 0;
        return ls+rs+1;
    }
    void insert(int d){
        if(data == d) return;
        if(data > d){
            if(!left) left = new Node(d);
            else left->insert(d);
        }
        else{
            if(!right) right = new Node(d);
            else right->insert(d);
        }
    }
    Node* minValueNode(){
        Node* current = this;
        while(current && current->left!=NULL)
            current = current->left;
        return current;
    }
    Node* deleteNode(int d){
        if(data > d)
            left = left? left->deleteNode(d) : NULL;
        else if(data < d)
            right = right? right->deleteNode(d) : NULL;
        else{
            if(left == NULL)
                return right;
            else if(right == NULL)
                return left;
            Node* temp = minValueNode();
            data = temp->data;
            right = right->deleteNode(temp->data);
        }
        if(left == NULL)
            return right;
        if(right == NULL)
            return left;
        return this;
    }
    void heapify(int i, int n){
        int largest = i;
        int l = 2*i + 1;
        int r = 2*i + 2;
        if(l < n && arr[l] > arr[largest])
        largest = l;
        if(r < n && arr[r] > arr[largest])

