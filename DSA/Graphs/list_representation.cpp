#include<iostream>
#include<vector>
using namespace std;
class Graph{
    int vertices;
    int edges;
    vector<int> *arr;
    public:
    Graph(int v, int e){
        arr= new vector<int>[v+1];
        vertices=v;
        edges=e;
        for(int i=1;i<=e;i++){
        cout<<"Enter the edges:"<<endl;
        int w,x;
        cin>>w>>x;
        arr[w].push_back(x);
        arr[x].push_back(w);
        }

        

    }
    void display() {
        for (int i = 1; i <= vertices; i++) {
            cout << "Vertex " << i << ": ";
            for (int j : arr[i]) {
                cout << j << " ";  // print each adjacent vertex
            }
            cout << endl;
        }
    }
};
int main(){
    cout<<"Enter the no of vertices and edges:"<<endl;
    int v,e;
    cin>>v>>e;
    Graph g(v,e);
    g.display();
    return 0;
}