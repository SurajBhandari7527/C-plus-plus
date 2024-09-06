#include<iostream>
using namespace std;
class Circle{
public:
    int radius;
 Circle(int radius){
    this->radius=radius;
 }
};
int main(){
    Circle c1(5);
    cout<<c1.radius<<endl;
    return 0;
}