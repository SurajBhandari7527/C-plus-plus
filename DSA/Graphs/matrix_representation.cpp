#include<iostream>
using namespace std;
class Graph{
    public:
    int **ptr;
    int size;
    Graph(int a){
        this->size=a;
        ptr= new int*[a+1];
        for(int i=0;i<=a;i++){
            ptr[i] = new int[a+1];
        }
         for(int i=0;i<=this->size;i++){
    for(int j=0;j<=this->size;j++){
        this->ptr[i][j]=0;

    }}
        int u,v;
        cout<<"Enter the nodes: "<<endl;
        while(true){
        cin>>u;
        if(u==-1 || v==-1){
            break;
        }
        cin>>v;
        ptr[u][v]=1;
        ptr[v][u]=1;
        

        }
    }
void display(){
    for(int i=0;i<=this->size;i++){
    for(int j=0;j<=this->size;j++){
        cout<<this->ptr[i][j]<<" ";

    }
    cout<<endl;
}
}};

int main(){
    Graph g(5);
    g.display();
    return 0;
}
//1 1 1 3 4 3 5 2 -1 -1 