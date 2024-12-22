#include<iostream>
using namespace std;
class Sample{
    public:
    int a;
    int b;
    Sample(int a,int b){
        this->a=a;
        this->b=b;
    }
    Sample(){
        
    }
    Sample operator()(int a, int b){
        this->a=a;
        this->b=b;
        return *this;
    }

void display(){
    cout<<"("<<this->a<<","<<this->b<<")"<<endl;
}
};

int main(){
    Sample s(2,3);
    s.display();
    Sample s1;
    s1(5,6);
    s1.display();

    //user defined -> basic

}