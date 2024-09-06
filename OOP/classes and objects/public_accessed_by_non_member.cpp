#include<iostream>
using namespace std;
  class Person{
        public:
         string name;
         int roll;
         Person(string name,int roll){
            this->name=name;
            this->roll=roll;

        }
    };
    void test(Person p)
    {
        cout<<p.name<<endl;
        cout<<p.roll<<endl;
        return ;
    }
int main(){
    Person p1("Suraj",102353001);
    test(p1);
  
    return 0;
}