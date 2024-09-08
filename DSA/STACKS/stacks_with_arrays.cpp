#include<iostream>
using namespace std;
class Stack{
    int size;
    int *arr;
    int top_pos;
    public:
    Stack(int size){
        this->size=size;
        this->arr=new int[size];
        this->top_pos=-1;

    }
    void push_element(int n){
        bool check=check_full();
        if(check){
            return ;
        }
        this->top_pos++;
        this->arr[top_pos]=n;

    }
    void pop_element(){
        bool check =check_empty();
        if(check){
            return ;
        }
        this->top_pos--;
    }
    void top(){
        cout<<arr[this->top_pos]<<endl;
    }
    bool check_empty(){ 
        return this->top_pos==-1;
        
    }
    bool check_full(){
        return this->top_pos==this->size;
    }
    void show_element(){
        int k=top_pos;
       {    for(int i=k;i>=0;i--){
            cout<<arr[k]<<"\t";
            k--;
        }
        cout<<"\n";
    }
    }
};
int main(){
    Stack st(5);
    st.push_element(1);
    st.push_element(2);
    st.push_element(3);
    st.show_element();
    st.pop_element();
    st.push_element(5);
    st.show_element();
    st.top();
    return 0;
}