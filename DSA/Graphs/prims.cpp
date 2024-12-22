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

    int prims_algo(int start){
        priority_queue<tuple<int,int,int>,greater<tuple<int,int,int>>> q;
        vector<int> checker(this->vertices,0);
        vector<pair<int,int> > v;
        q.push((0,start,-1));
        
        while(!q.empty()){
            int wt=q.top().first;
            int st=q.top().second;
            int parent = q.top().third;
            if(checker[st]) continue;
            checker[st]=1;
            q.pop();
            for (auto it: arr[st]){
                if(!checker[it.second]){
                    q.push((it.first,it.second,st));
                    v.push_back({st,it.second});
               
        }
        
    }
        }
    }
};
int main(){
    cout<<"Enter the no of vertices and edges:"<<endl;
    int v,e;
    cin>>v>>e;
    Graph g(v,e);
    g.prims_algo(1);
    
    return 0;
}