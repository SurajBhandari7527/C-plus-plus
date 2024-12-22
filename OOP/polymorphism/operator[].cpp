#include <iostream>
using namespace std;

class Array{
int arr[10];
public:
Array(){
for (int i =0;i<10;i++)
    arr[i]=i;
}
int operator[](int index)
{
    try
    {
        return arr[index];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

};

int main()
{
    Array arr;
    cout<<arr[5];
    return 0;
}
