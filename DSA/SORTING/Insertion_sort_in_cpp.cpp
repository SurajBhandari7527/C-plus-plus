#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements of the array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The inputed array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    int temp,j;
    for(int i=0;i<n;i++){
        j=i;
        while(j>=0 and (arr[j]>arr[j+1])){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                j--;
            }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return 0;
}