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
}