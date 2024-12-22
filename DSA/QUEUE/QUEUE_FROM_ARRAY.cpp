#include<iostream>
using namespace std;
class Queue{
public:
int * arr;
int curr_size;
int capacity;
int head;
Queue(int c){
    this->capacity=c;
    this->curr_size=0;
    this->arr=new int[c];
}
void enque(int val){
    if(isFull()) return;
    if(this->curr_size==0){
        this->head=0;
    }
    arr[this->curr_size]=val;
    curr_size++;
}
void deque(){
    if(isEmpty() ) return;
    head=head+1;
    
}
bool isFull(){
    return this->curr_size==this->capacity;
}
bool isEmpty(){
    return this->curr_size==0;
}
void show(){
    for(int i=this->head;i<curr_size;i++){
        cout<<this->arr[i]<<"\t";
    }
}
};
int main(){
    Queue q1(4);
 q1.enque(1);
 q1.enque(2);
 q1.enque(3);
 q1.enque(4);
 q1.deque();
 q1.deque();
 q1.show();



    return 0;
}