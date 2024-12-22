#include<iostream>
#include<queue>
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
    void bfs(int R){
        queue<int> q;
        vector<int> checker(this->vertices+1,0);
        vector<int> result;
        q.push(R);
        checker[R]=1;
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            result.push_back(temp);

            for(auto it: arr[temp]){
                if(!checker[it]){
                    checker[it]=1;
                    q.push(it);
                }
            }


        }
        cout<<"BFS is :"<<endl;
        for( auto it: result){
            cout<<it<<" ";
        }
    }
    bool detect_cycle(){
        queue<pair<int,int>> q;
        vector<int> checker(6,0);
        int start=1;
        checker[1]=1;
        q.push({start,-1});
        while(!q.empty()){
            int curr=q.front().first;
            int parent=q.front().second;
            q.pop();
            for(auto it: this->arr[curr]){
                if(it!=parent && checker[it]==1){
                    return true;
                }
                else if(checker[it]==0){
                    q.push({it,curr});
                    checker[it]=1;
                
                }
            }

        }
        return false;

    
}
};

int main(){
    cout<<"Enter the no of vertices and edges:"<<endl;
    int v,e;
    cin>>v>>e;
    Graph g(v,e);
    g.display();
    g.bfs(1);
    cout<<g.detect_cycle();
    return 0;
}