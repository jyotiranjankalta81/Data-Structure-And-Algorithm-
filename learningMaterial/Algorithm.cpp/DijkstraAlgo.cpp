// Problem
// Given a weighted graph. Find the single source shortest path from a vertex
// u to all the vertices in the graph.if the node is unreachble,then print-1.

// Note:
// The weights of the edges must be Positive.

// Idea
// 1.Assign a distance value to all vertices in the input graph .
// Initialize all distance values as INFINITE. Assign distance value as 0 for the 
// source vertex.
// 2.while set is not empty
// A.pick a vertex u from set s that has maximum distance value.
// B.update distance value of all adjacent vertices of u.

#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<stack>
#include<queue>
#include<set>

using namespace std;
const int inf = 1e7;
int32_t main(){
    int n,m; cin>>n>>m;
    vector<int>dist(n+1,inf);
    // thsi is a weighted graph so we take vector vector pair 
    vector<vector<pair<int,int>>>graph(n+1);
    // take the input of m edges
    for (int i = 0; i <m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
    // take the source input
    int source;
    cin>>source;
    // distance is 0 initially
    dist[source] = 0;
    // create set
    set<pair<int,int>>s;
    // struct {wt,vertex}
    s.insert({0,source});
    // till set is not empty
    while (!s.empty())
    {
        // smallest distance of set
        auto x = *(s.begin());
        // now remove the smallest distance
        s.erase(x);
        for (auto it:graph[x.second])
        {
            // if after using x distance update 
            if (dist[it.first] > dist[x.second] + it.second)
            {
                s.erase({dist[it.first],it.first});
                dist[it.first] = dist[x.second] + it.second;
                s.insert({
                dist[it.first],it.first
                });
            }
            
        }
        

    }
    for (int i = 1; i <=n; i++)
    {
        if (dist[i]<inf)
        {
            cout<<dist[i]<<" ";
        }else{
            cout<<-1<<" ";
        }
        
    }
    
    

    
}