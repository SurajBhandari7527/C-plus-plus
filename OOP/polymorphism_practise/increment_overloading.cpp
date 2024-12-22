#include<iostream>
using namespace std;
class Sample{
    public:
    int val;
    Sample(int v){
        val=v;
    }
Sample operator++(){
    Sample temp= *this;
    temp.val=temp.val+1;
    return temp;

}
Sample  operator++(int ){
    Sample temp= *this;
     this->val=this->val+1;
    return temp;

}
void display(){
    cout<<this->val;
}
};

int main(){
    Sample s1(5);
    (++s1).display();
    s1.display();

    (s1++).display();
    s1.display();




}