#include<iostream>
using namespace std;
class item{

private: 
int a=10;
public:
void getData(int b){
    cout<<"It is called";
};
};
inline void item::getData(int b)
{cout<< a*b;

}
int main(){

item obj;
obj.getData(5);
}