#include <iostream>
using namespace std;
class X
{
    int a;
public:
    static int b;
    X()
    {
        this->a = 0;
    }
    X(int a)
    {
        this->a = a;
    }
    X(X &x)
    {
        this->a = x.a;
    }
    void display()
    {
        cout << "a = " << this->a << endl;
    }
};
int X:: b=43;   
int main()
{
    cout<<X::b;
    X a(432);
    a.display();
     X b(a);
     cout<<"from b ::\n";
     b.display();
}