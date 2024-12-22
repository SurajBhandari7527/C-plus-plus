#include<iostream>
using namespace std;
class Vehicle{
    public:
    Vehicle(){
        
        cout<<"parent maa aayo bhai"<<endl;
    }
    ~Vehicle(){
        cout<<"parent bata gayo bhai"<<endl;
    }
};
class car: public Vehicle{
    public:
    car(int n){
        cout<<"child ma aayo"<<endl;
       
    }
    ~car(){
        cout<<"child bata gayo bhai"<<endl;
    }

};                  // that means the contructor of parent is called first but 
         // destructor of child is called first when scope of child object finished
       // and as soon as the child destructor is called it also calls the parent destructor
void check(car c){
    cout<<"check function called"<<endl;
}
int main(){
    car c1(1);
    check(c1);
    return 0;
}
