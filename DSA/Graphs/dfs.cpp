#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Graph{
    public:
    int vertices;
    int edges;
    vector<int> * arr;
    
    Graph( int v, int e){
        vertices=v;
        edges=e;
        arr=new vector<int>[v+1];
        int y,z;
        for(int i=0;i<e;i++){
            cout<<"Enter the edges:"<<endl;
            cin>>y>>z;
            arr[y].push_back(z);
            arr[z].push_back(y);
        }
    }
    void displaylist(){
        for(int i=1;i<this->vertices+1;i++){
            cout<<"Vertex"<<i<<":";
            for(auto j: arr[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
    int dfs(int R,vector<int> *arr,vector<int> checker,vector<int> &result){
        result.push_back(R);
        checker[R]=1;
        for(auto it: arr[R]){
            if(!checker[it]){
                dfs(it,arr,checker,result);
            }
        }


    }
    vector<int> dfscaller(){
        vector<int> v(6,0);
    vector<int> result;
    dfs(1,arr,v,result);
        return result;
    }
};
int main(){
    Graph g(5,5);
    g.displaylist();
    vector<int> result;
    result=g.dfscaller();
    for(int i=0;i<5;i++){
        cout<<result[i];
    }

}