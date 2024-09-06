#include<iostream>
using namespace std;
class Rectangle {
    public:
    float length;
    float breadth;
    void set_data(){ int l,b;
        cout<<"Enter the length and breadth"<<endl;
        cin>>l>>b;
        this->length=l;
        this->breadth=b;
    }
    void get_Area(){
        int area=length*breadth;
        cout<<"The area of the rectangle is: "<<area<<endl;

    }

};
int main(){
    Rectangle R;
    R.set_data();
    R.get_Area();
    return 0;
}