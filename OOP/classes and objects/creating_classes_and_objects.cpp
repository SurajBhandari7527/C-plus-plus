#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
        string name;
        int roll;
        char gender;
        void get_details(){
            cout<<name<<endl;
            cout<<roll<<endl;
            cout<<gender<<endl;
         
        }
        void set_details(){
            cout<<"Enter the details name,roll,gender"<<endl;
                cin>>name>>roll>>gender;

       
        }
    
  
        
};
int main(){
 Student s[5];

    for(int i=0;i<5;i++){
        s[i].set_details();
    }
    for(int i=0;i<5;i++){
        s[i].get_details();
    }
    
    return 0;
}
