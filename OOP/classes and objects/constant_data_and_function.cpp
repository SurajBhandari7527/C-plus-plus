#include<iostream>
using namespace std;
class A{
    public:
    const float PI=3.14;
    static int x; // static variable-> this will remain same for all objects but initialized using scope resolution
    int y; // member variable

    A(int y){
        this->y=y;
    }
    void cons_func()const{
        // PI=3;
        x=6;
        this->y=5; // the member variable cant be changed inside the const function
    }
};
int A::x=3;
int main(){
    A a(10);
    cout<<a.PI<<endl;
    a.cons_func();
    cout<<a.x<<endl;
    cout<<a.y<<endl;
    return 0;
}