#include <iostream>
using namespace std;

class complex
{
    int x;
    int y;

public:
    complex(int x = 0, int y = 0)
    {
        this->x = x;
        this->y = y;
    }
    complex operator()(int a, int b)
    {
        this->x = a;
        this->y = b;
        return *this;
    }
    void display()
    {
        cout << x << '+' << y << "i" << endl;
    }
};

int main()
{
    complex x1;
    complex x(2,3);
    x.display();
    x1=x(432,407);
    x1.display()
    x.display();
    return 0;
}
