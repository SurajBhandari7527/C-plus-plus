#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter the size of the another array: ";
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
int l=0;
int S1[non_zeros][3];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    {
        if(A[i][j]!=0)
        {
            S1[l][0]=i;
            S1[l][1]=j;
            S1[l][2]=A[i][j];
            l++;
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




//second matrix input
    int B[m][n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>B[i][j];
        }
    }
    for(int i=0;i<m;i++){
        cout<<"\n"<<endl;
        for(int j=0;j<n;j++){
            cout<<B[i][j]<<"\t";
        }
        
    }
int zeros_2=0;
int non_zeros_2=0;
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    {
        if(B[i][j]==0){
            zeros_2++;
        }
        else{
            non_zeros_2++;
        }
    }
}
l=0;
int S2[non_zeros_2][3];
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++)
    {
        if(B[i][j]!=0)
        {
            S2[l][0]=i;
            S2[l][1]=j;
            S2[l][2]=B[i][j];
            l++;
        }
    }
}
cout<<"\n";
for(int i=0;i<non_zeros_2;i++){
    cout<<"\n";
    for(int j=0;j<3;j++){
        cout<<S2[i][j]<<"\t";
    }
}
cout<<"\n";
for(int i=0;i<non_zeros;i++){
    cout<<"\n";
    for(int j=0;j<3;j++){
        cout<<S1[i][j]<<"\t";
    }
}



// addition
int Add[non_zeros+non_zeros_2][3];
int a=0;


for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        int match_r_1=0;
        int match_r_2=0;
        for(int l=0;l<non_zeros;l++){
            if(i==S1[l][0] && j==S1[l][1])
            { match_r_1=l;
            break;}
           
        }
        for(int k=0;k<non_zeros_2;k++){
            if(i==S2[k][0] && j==S2[k][1])
            { match_r_2=k;
                 break;   }
        }
        if(match_r_1!=0 && match_r_2!=0){
            Add[a][0]=S1[match_r_1][0];
            Add[a][1]=S1[match_r_1][1];
            cout<<(S1[match_r_1][2]);
            cout<<S2[match_r_2][2];
            Add[a][2]=S1[match_r_1][2]+S2[match_r_2][2];
            cout<<(Add[a][2]);     
            a++; 
        }
        else if(match_r_1==0 && match_r_2!=0){
            Add[a][0]=S2[match_r_2][0];
            Add[a][1]=S2[match_r_2][1];
            Add[a][2]=S2[match_r_2][2]; 
            a++;
        }
        else if(match_r_1!=0 && match_r_2==0){
            Add[a][0]=S1[match_r_1][0];
            Add[a][1]=S1[match_r_1][1];
            Add[a][2]=S1[match_r_1][2]; 
            a++; 
        }
    }
}
for(int i=0;i<a-1;i++){
    cout<<"\n";
    for(int j=0;j<3;j++){
        cout<<Add[i][j]<<"\t";
    }
}

return 0;
}
