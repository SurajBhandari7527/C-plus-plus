#include<iostream>
#include<queue>
#include<vector>
using namespace std;
class Graph{
    int vertices;
    int edges;
    vector<vector<pair<int,int>>> arr;
    public:
    Graph(int v, int e){
        vertices=v;
        edges=e;
        for(int i=1;i<=e;i++){
        cout<<"Enter the weight: "<<endl;
        int z;
        cin>>z;
        cout<<"Enter the edges:"<<endl;
        int w,x;
        cin>>w>>x;
        
        arr[w].push_back({z,x});
        arr[x].push_back({z,w});
        }

        

    }

    int dijkstra(int start, int end){
        priority_queue<pair<int,int>,greater<pair<int,int>>> q;
        vector<int> checker(this->vertices,0);
        vector<int> dist(this->vertices,100000);
        q.push({0,start});
        checker[start]=1;
        while(!q.empty()){
            int wt=q.top().first;
            int st=q.top().second;
            q.pop();
            for (auto it: arr[st]){
                if(!checker[it.second]){
                    q.push(it);
                    checker[it.second]=1;
                }
                if(dist[it.second]>wt+it.first){
                    dist[it.second]=wt+it.first;
                }
            }
        }
        return dist[end];

    }
};
int main(){
    cout<<"Enter the no of vertices and edges:"<<endl;
    int v,e;
    cin>>v>>e;
    Graph g(v,e);
    int dist=g.dijkstra(1,7);
    cout<<dist<<" is the shortest path from 1 to 7";
    
    return 0;
}