#include<iostream>
using namespace std;
class parent{
    public:
    void prnt(){
        cout<<"parent"<<endl;
    }
};
class child : public parent{
    public:
    void prnt(){
        cout<<"child"<<endl;
    }
    void test(){
        cout<<"Yes its called"<<endl;
    }
};

int main(){
    child c1;
    c1.prnt();

     parent * c2;
    c2=new child();
    c2->prnt();
    //c2->test();     c2 is actually an object of parent class so it cant access the functions of child class

    //child * c3;
    //c3 =new parent();      child pointer cannot be used point the object of parent class but parent class pointer can store the address of child class
    //c3->prnt();
};
