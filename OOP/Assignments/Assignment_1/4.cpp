 //Write a C++ program that will ask for a temperature in Celsius and display it in degree 
//Fahrenheit.[F=9C/5+32]
#include<iostream>
using namespace std;
int main(){float C;
    cout<<"Enter the temperature in Celsius"<<endl;
    cin>>C;
    cout<<"The temperature in Farenheit is: "<<9*C/5+32<<" degree F"<<endl;
    
    return 0;
}
