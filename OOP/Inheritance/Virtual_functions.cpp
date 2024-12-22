#include<iostream>
using namespace std;
class Name{
    private:
    string name;
    int age;
    public:
    Name(string n,int a){
        age=a;
        name=n;
    }
    void display(){
        cout<<this->age<<endl;
        cout<<this->name<<endl;
    }
    void get_data(){
        display();
    }
};
int main(){
    Name n1("Suraj",20);
    n1.get_data();
    return 0;
}