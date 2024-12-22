#include<iostream>
using namespace std;

class Counter {
    int value;
    
public:
    Counter() : value(0) {}
    Counter(int value) : value(value) {}

    void display() {
        cout << "value -----> " << this->value << endl;
    }

    Counter operator++() {
        this->value++;
        return *this;
    }

    Counter operator++(int) {
        Counter temp = *this;
        this->value++;
        return temp;
    }
    
};

int main() {
    Counter counter;
    counter.display();
    (++counter).display();
    counter.display();
    Counter C=counter++;
    C.display();
    counter.display();
    return 0;
}
