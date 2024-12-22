#include <iostream>
using namespace std;

class kilometer {
    float km;

public:
    // Constructor to initialize km to 0
    kilometer() : km(0) {}

    // Constructor that accepts meters as integer and converts to kilometers
    kilometer(int meters) : km(meters / 1000.0f) {}


    operator int() const {
        return km * 1000;
    }

    void display() const {
        cout << km << " km\n";
    }
};

int main() {
    kilometer A;
    A=4324;
    
    A.display();  // Should display 0 km

    int a = A;
    cout << a << " meters\n";  // Should display 0 meters

    kilometer kmm = 1234;  // Now this works because of the constructor
    kmm.display();  // Should display 1.234 km

    return 0;
}
