#include<iostream>
using namespace std;
class Cel{
float c;
public:
Cel(){c=0;} 
Cel(float f){c=(f-32)* 5/9;}
void show(){cout<<"Celsius: "<<c;}
};
int main(){
    Cel cvalue(50);            
    float f;                
    cout<<"Fahrenheit : "; 
     cin>>f;
    cvalue=f;                    //implicit type conversion
    cvalue.show();
}
