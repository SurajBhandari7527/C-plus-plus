#include <iostream>
using namespace std;

const int ROWS = 32;
const int COLS = 7;

int main()
{
    int arr[ROWS][COLS];
    int v = 1;

    // Fill the array
    for (int i = 0; i < ROWS; i++)
    {
        for (int k = 0; k < COLS; k++)
        {
            arr[i][k] = v++;
        }
    }

    int a = 0;
    // Output the array
    for (int i = 0; i < ROWS; i++)
    {
        for (int k = 0; k < COLS; k++)
        {
            cout << arr[i][k] << " ";
        }
        cout << endl;
        cout<<i<<endl;
        cout << endl;
        cout << endl;
    }
    // cout<arr[12][]

    return 0;
}
