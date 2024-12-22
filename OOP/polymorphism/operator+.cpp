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
    complex operator+(complex temp)
    {
        return complex(this->x + temp.x, this->y + temp.y);
    }
    void display()
    {
        cout << x << '+' << y << "i" << endl;
    }
    complex add(complex temp)
    {
        return complex(this->x + temp.x, this->y + temp.y);
    }
};

int main()
{
    complex x1;
    complex x2(1, 2);
    complex x3(4, 5);
    x1 = x3 + x2 + x2 + x3 + x1 + x2;
    x2.display();
    x3.display();
    x1.display();
    x1=x3.add(x2.add(x2));
    x1.display();
    return 0;
}
