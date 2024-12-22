#include<iostream>
using namespace std;
    class B;
    class A{
        int a;
        public:
        A(int x){
            a=x;
        }
        friend void swap(A &a, B &b);
         void get_details(){
            cout<<this->a<<endl;
        }

    };
     class B{
        int b;
        public:
        B(int x){
            b=x;
        }
        friend void swap(A &a, B &b);
        void get_details(){
            cout<<this->b<<endl;
        }

    };
    void swap(A&a, B &b){
        
            int temp=a.a;
            a.a=b.b;
            b.b=temp;
        
    }

    int main(){
    A a(5);
    B b(10);
    swap(a,b);
    a.get_details();
    b.get_details();
    return 0;
}