#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The inputed array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    int min,temp;
    cout<<"\n";

    for(int i=0;i<n;i++){
        min=i;
        for(int j=i;j<n;j++){
            if(arr[min]>arr[j]){
               min=j;

            }

        }
         temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }

        for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}