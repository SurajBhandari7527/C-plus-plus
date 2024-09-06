#include<iostream>
using namespace std;
class Math{
    private:
    int first_number;
    int second_number;
    void addition(){
        cout<<first_number+second_number<<endl;
    }
    void subtraction(){
        cout<<first_number-second_number<<endl;
    }
    void multiplication(){
        cout<<first_number*second_number<<endl;
    }
    public:
    Math(int value_1,int value_2){
        first_number=value_1;
        second_number=value_2;

    }
    void operation(){
        string choice;
        cout<<"Enter A for addition, S for subtraction, M for multiplication, D for division";
        cin>>choice;
        
        if(choice=="A"){
            addition();
        }
        else if(choice=="S"){
            subtraction();
        }
        else if(choice=="M"){
          multiplication();
        }
    }
 
};
int main(){int n,m,o;
    Math* op[1];
    for(int i=0;i<1;i++){
        cout<<"enter the numbers: "<<endl;
        cin>>m>>o;
        op[i]= new Math(m,o);
    }
    op[0]->operation();
    return 0;
}