#include<iostream>
using namespace std;
class Speedometer{
    public:
    int speed;
    Speedometer(int speed):speed(speed){

    }
   
    
    
};
class FuelGauge{
   public:
   float fuel;
   FuelGauge(float f):fuel(f){

   }
    
    
};
class Thermometer{
   public:
   float temp;
   Thermometer(float t):temp(t){

   }
    
    
};
class CarDashboard: public Speedometer,FuelGauge,Thermometer{
    public:
    CarDashboard(int s,float f,float t):Speedometer(s),FuelGauge(f),Thermometer(t){

    }
    void getter(){
        cout<<"speed: "<<speed<<endl;
        cout<<"fuel: "<<fuel<<endl;
        cout<<"temperature: "<<temp<<endl;
    }

};
int main(){
   CarDashboard d(20,20.5,37);
    d.getter();
    return 0;
}