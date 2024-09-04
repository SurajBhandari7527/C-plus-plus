#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the size of the array: ";
    cin>>m>>n;
    int** ptr= new int*[m];
    
    for(int i=0;i<m;i++){
      ptr[i]= new int[n];

        }
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>ptr[i][j];
        }
    }
   for(int i=0;i<m;i++){
        cout<<"\n";
        for(int j=0;j<n;j++){
        cout<<((ptr[i][j]))<<"\t";

 }
    }

    


    return 0;
}