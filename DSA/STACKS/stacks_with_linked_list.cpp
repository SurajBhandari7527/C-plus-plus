#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node(int n){
        this->val=n;
        this->next=NULL;
    }

};
class Stack{
        
        public:
        Node * head;
        int capacity;
        int currsize;
        Stack(int c){
            this->capacity=c;
            this->currsize=0;
            this->head=NULL;


        }
        void push(int n){
            bool check=isfull();
            if(check){
                cout<<"Overflow"<<endl;
                return;
            }
            Node* node= new Node(n);
            node->next=this->head;
            this->head=node;
            this->currsize++;
        }
        bool isempty(){
            return this->currsize==0;
        }
        bool isfull(){
            return this->currsize==this->capacity;
        }
        int pop(){
            bool check=isempty();
            if(check){
                cout<<"The stack is empty."<<endl;
                return;
            }
            int t=this->head->val;
            Node* temp=this->head;
            this->head=this->head->next;
            free(temp);
            return t;

        }
        void show(){
            Node* temp= this->head;
            while(temp!=NULL){
                cout<<temp->val<<"\t";
                temp=temp->next;
            }
        }
        void copy(Stack st1){
            Node*temp1=this->head;
            Node*temp2=st1.head;
            

        }
};


   
int main(){
    Stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.pop();
    st.pop();
    st.show();  
    Stack st1(5);
    st.copy(st1);
    return 0;
}