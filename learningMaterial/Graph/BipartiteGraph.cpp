#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
vector<vector<int>>adj;
// create a visited arr for checking 
vector<bool>vis;
// create a colour arr for store colour type
vector<int>col;
int bipart;

void color(int  u, int curr){
    if (col[u] != -1 && col[u]!= curr)
    {
        bipart = false;
        return;
    }col[u] = curr;
    if (vis[u])
    {
        return;
    }
    vis[u] = true;
    for (auto i: adj[u])
    {
        color(i, curr xor 1);
    }
    
    
    
}
int32_t main(){
    bipart = true;
    // here n no.of vertices & M no. of edges
    int n,m;
    cin>>n>>m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n,false);
    // Initialize colour vector
    col = vector<int>(n,-1);

    for (int i = 0; i <m; i++)
    {
        int u,v;
        cin>>u>>v;
        // take the input of m edges
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (int i = 0; i <n; i++)
    {
        if(!vis[i]){
            color(i,0);
        }
    }
    if (bipart)
    {
        cout<<" Graph is bipart ";
    }else{
        cout<<" Graph is not bipart"; 
    }
    
    
    

}