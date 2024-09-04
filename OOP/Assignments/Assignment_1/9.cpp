// WAP to display arithmetic operations using switch-case statement. 
#include<iostream>
using namespace std;
int main(){ int a,b;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    char ch;
    cout<<"Enter 'A' for addition,'S' for subtraction, 'M' for multiplication, 'D' for division"<<endl;
    cin>>ch;
    switch(ch)
    {
        case('A'):
         {
            cout<<"Addition is :"<<a+b<<endl;
            break;
         }
         case('S'):
         {
            cout<<"Subtraction is :"<<a-b<<endl;
            break;
         }
         case('M'):
         {
            cout<<"Multiplication is :"<<a*b<<endl;
            break;
         }
         case('D'):
         {
            cout<<"Division is :"<<((float)a)/((float)b)<<endl;
            break;

         }
    }
    return 0;
}