#include<iostream>
using namespace std;
class Sample{
    public:
    int a;
    Sample* operator ->(){
        return this;
    }
};
int main(){
    Sample s;
    Sample s1;

    s->a=10;
    
    cout<<s.a<<s->a<<endl;
}