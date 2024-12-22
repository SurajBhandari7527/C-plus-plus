#include<iostream>
using namespace std;

    class Suraj{
        int age;
        string gf;
        public:
        Suraj(int a, string g){
            age=a;
            gf=g;
        }
        friend void get_details(Suraj &s);

    };
    void get_details(Suraj &s){
        
            cout<<s.age<<s.gf<<endl;
        
    }

    int main(){
    Suraj S(20,"Suraj");
    get_details(S);
    
    return 0;
}