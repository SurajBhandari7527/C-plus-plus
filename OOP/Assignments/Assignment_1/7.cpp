//WAP to swap two numbers using bitwise operator.
#include<iostream>
using namespace std;
int main(){int m,n;
    cout<<"Enter two numbers"<<endl;
    cin>>m>>n;
    cout<<"m is "<<m<<endl;
    cout<<"n is "<<n<<endl;
    m=m^n;
    n=m^n;
    m=m^n;
    cout<<"m is "<<m<<endl;
    cout<<"n is "<<n<<endl;

    return 0;
}