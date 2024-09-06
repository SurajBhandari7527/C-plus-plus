/*Define a class Complex with variables real and imaginary along with following:
(a)void setComplex (float, float) to initialize object values.
(b) void displayComplex() to show the complex number
(c)Pass and return objects to calculate sum of two complex numbers. Display the 
sum*/

#include<iostream>
using namespace std;
class Complex{
    public:
    float real;
    float imaginary;
    void set_complex(float real , float imaginary){
        this->real =real;
        this->imaginary=imaginary;
    }
    void display_Complex(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
   

    

};
 void addition(Complex C1,Complex C2){
        cout<<
        cout<<"Addition of two Complex numbers is :"<<C1.real+C2.real<<"+"<<C1.imaginary+C2.imaginary<<"i"<<endl;

    }
int main(){int m,n;
    Complex C[2];
    for(int i=0;i<2;i++){
        
        cout<<"Enter the real and imaginary value: "<<endl;
        cin>>m>>n;
    C[i].set_complex(m,n);

    }
    for(int i=0;i<2;i++){
    
    C[i].display_Complex();

    }
    
    addition(C[1],C[2]);

    return 0;
}