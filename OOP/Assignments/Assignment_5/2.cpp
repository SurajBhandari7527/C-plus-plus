#include<iostream>
using namespace std;
class Vehicle{
    protected:
    int speed;
    float mileage;
    int cc;
    public:
    Vehicle(int speed,float mileage, int cc){
        this->speed=speed;
        this->mileage=mileage;
        this->cc=cc;
        cout<<"parent maa aayo bhai\n";
    }
    protected:
    void get(){
        cout<<"getter";
    }
     Vehicle(){
        cout<<"Default contructor of Parent"<<endl;
        
    }
};
class car: public Vehicle{
    public:
    int no_of_seats;
    car(int speed,float mileage,int cc,int s){
        cout<<"child ma aayo\n";
        this->no_of_seats=s;
        Vehicle(speed,mileage,cc);
        get();
    }

};
int main(){
    car c1(22,50.5,220,2);
    
    return 0;
}