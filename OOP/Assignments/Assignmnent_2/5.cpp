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
    void set_complex(){float real,imaginary;
          cout<<"Enter the real and imaginary value: "<<endl;
        cin>>real>>imaginary;
        this->real =real;
        this->imaginary=imaginary;
    }
    void display_Complex(){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
    }
   

    

};
 void addition(Complex C1,Complex C2){
      
        cout<<"Addition of two Complex numbers is :"<<C1.real+C2.real<<"+"<<C1.imaginary+C2.imaginary<<"i"<<endl;

    }
int main(){int m,n;
    Complex C[2];
    for(int i=0;i<2;i++){
        
      
    C[i].set_complex();

    }
    for(int i=0;i<2;i++){
    
    C[i].display_Complex();

    }
    
    addition(C[0],C[1]);

    return 0;
}