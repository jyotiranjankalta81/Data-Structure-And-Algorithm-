// // Spanning Tree
// Given an undirected and connected graph G(V,E), a Spanning tree of the 
// graph G is a tree that spans G(that is, it includes every vertex of G)
// and is a subgraph of G (every edge in the tree belongs to G)

// The cost of the spanning tree is the sum of the weights of all the edges
// in the tree.There can be many spanning trees.

#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
const int N = 1e5+6;
vector<int>parent(N);
vector<int>sz(N);
void make_set(int v){
    parent[v] = v;
    sz[v] = 1;

}
int find_set(int v){
    if (v == parent[v])
    {
        return v;
    }
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if (a!= b)
    {
        if (sz[a] < sz[b])
        {
            swap(a,b);
        }
        parent[b] = a;
        sz[a] += sz[b];
        
    }
    
}
int32_t main(){
    for (int i = 0; i < N; i++)
    {
        make_set(i);

    }

    int n,m;
    cin>>n>>m;
    vector<vector<int>>edges;
    for (int i = 0; i <m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({w,u,v});
    }
    // sorting according to widgets
    sort(edges.begin(), edges.end());
    int cost = 0;
    for (auto i: edges)
    {
        int w = i[0];
        int u = i[1];
        int v = i[2];
        int x = find_set(u);
        int y = find_set(v);
        if (x== y)
        {
            continue;
        }else{
            cout<<u<<" "<<v<<"\n";
            cost += w;
            union_sets(u,v);
        }
        
    }
    cout<<cost;
    
    
}