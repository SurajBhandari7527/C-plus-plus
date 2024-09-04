#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the size of the array: ";
    cin>>m;
    cin>>n;
    int A[m][n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>A[i][j];
        }
    }
    for(int i=0;i<m;i++){
        cout<<"\n"<<endl;
        for(int j=0;j<n;j++){
            cout<<A[i][j]<<"\t";
        }
        
    }
int zeros=0;
int non_zeros=0;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    {
        if(A[i][j]==0){
            zeros++;
        }
        else{
            non_zeros++;
        }
    }
}
int S1[non_zeros][3];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    {
        if(A[i][j]!=0)
        {
            S1[i][0]=i;
            S1[i][1]=j;
            S1[i][2]=A[i][j];
        }
    }
}
cout<<"\n";
for(int i=0;i<non_zeros;i++){
    cout<<"\n";
    for(int j=0;j<3;j++){
        cout<<S1[i][j]<<"\t";
    }
}
cout<<"\n";
//operations
//transpose addition multiplication

//transpose
int S2[non_zeros][3];
int temp;
for(int i=0;i<non_zeros;i++){
temp=S1[i][0];
S2[i][0]=S1[i][1];
S2[i][1]=temp;
S2[i][2]=S1[i][2];
}

for(int i=0;i<non_zeros;i++){
    cout<<"\n";
    for(int j=0;j<3;j++){
        cout<<S2[i][j]<<"\t";
    }
}
int k=0;
int R_M[non_zeros][3];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        for(int l=0;l<non_zeros;l++){
            if(i==S2[l][0] && j==S2[l][1])
            {
                R_M[k][0]=S1[i][0];
                R_M[k][1]=S1[i][1];
                R_M[k][2]=S1[i][2];
                k++;
            }
        }
    }
}
cout<<"\n";
for(int i=0;i<non_zeros;i++){
    cout<<"\n";
    for(int j=0;j<3;j++){
        cout<<R_M[i][j]<<"\t";
    }
}

//addition


    return 0;
}

