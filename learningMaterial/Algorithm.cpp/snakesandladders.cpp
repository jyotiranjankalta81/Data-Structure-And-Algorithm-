// Problem:-
// The game of snake and ladder.
// You are at squre 1 and have to reach square 100.You have complete control 
// over the die and can get any number from 1-6.
// for given ladders and snakes,find the minimum steps to reach.
// IDEA
// 1.BFS
// 2.Push 1 into the queue,
// for all possibilities in the dice.
// check if the next position is ladder, snake or empty.
// mark the squre as visited & push into queue.
// 3.Stop the traversal ,when you reached 100.
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
using namespace std;
int32_t main(){
    int ladders,snakes;
    cin>>ladders;
    map<int,int>lad;
    map<int,int>snak;
    for (int i = 0; i <ladders; i++)
    {
        int u,v;
        cin>>u>>v;
        lad[u] = v;
    }
    cin>>snakes;
    for (int i = 0; i <snakes; i++)
    {
        int u,v;
        cin>>u>>v;
        snak[u] = v;
    }
    int moves = 0;
    queue<int> q;
    q.push(1);
    // till i'm not gettting 100
    bool found = false;
    // make a visited vector for checking visited or not.
    vector<int> vis(101,0);
    vis[1] = true;
    // till my queue is not empty & not found 100 squre traverse 
    while (!q.size() and !found)
    {
        int sz = q.size();
        while (sz--)
        {
            int t = q.front();
            q.pop();
            for (int die = 1; die<= 6;die++)
            {
                if (t + die == 100)
                {
                    found = true;
                }
                // check ladder squre 100 & visited or not
                if (t+die <= 100 and lad[t+die] and !vis[lad[t+die]])
                {
                    
                    vis[lad[t+die]] = true;
                    if (lad[t+die] == 100)
                    {
                        found = true;
                    }
                    q.push(lad[t+die]);
                    
                }
                // also same condition for snake
                else if(t+die <= 100 and snak[t+die] and !vis[snak[t+die]]){
                    vis[snak[t+die]] = true;
                    if (snak[t+die] == 100)
                    {
                        found = true;
                    }
                    q.push(snak[t+die]);
                    
                }
                else if (t+die <= 100 && !vis[t+die] && snak[t+die] && !lad[t+die])
                {
                    vis[t+die] = true;
                    q.push(t+die);
                }
                
                
                
            }
            
        }
        moves++;
    }
    if (found)
    {
        cout<<moves;
    }else{
        cout<<-1;
    }
    
    
    
    
}