#include<iostream>
using namespace std;
int main(){int n;
    cout<<"Enter the number of elements in the array: "<<endl;
    cin>>n;
    int* ptr= new int[n];
    cout<<"Enter the elements of the array: ";
    for ( int i=2;i<n+2;i++){
        cin>>ptr[i];
    }
    for ( int i=2;i<n+2;i++){
        cout<<ptr[i];
    }
    return 0;
}