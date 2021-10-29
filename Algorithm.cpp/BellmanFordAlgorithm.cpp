// From a source vertex V,find the shortest distance to all other nodes in the graph.
// Idea
// 1.Initialy d[v] = 0 and for all other elements d[] = infinite.
// 2.In each pass, relax all the edges.
// i.e for edge (a,b) having weight w.
// d[b] = min(d[b]), d[a] + w);
// 3.Assuming no negative edge cycle, since there are n vertices,
// shortest path can only contain 'n-1' edges.Therefore, we will get our answar in at most 'n-1 ' passes.

#include<iostream>
#include<algorithm>
#include<math.h>
#include<vector>
using namespace std;
const int INF = 1e9;

int32_t main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>edges;
    for (int i = 0; i <m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
    }
    int src;
    cin>>src;
    vector<int>dist(n,INF);
    dist[src] = 0;
    for (int iter = 0; iter<n-1; iter++)
    {
        bool change = false;
        for (auto e: edges)
        {
            int u = e[0];
            int v = e[1];
            int w = e[2];
            if (dist[v] > w + dist[u])
            {
                change = true;
            }
            
            dist[v] = min(dist[v],w + dist[u]);
        }
        
    }
    for (auto i: dist)
    {
        cout<<i<<" ";
    }cout<<"\n";
    
    
}