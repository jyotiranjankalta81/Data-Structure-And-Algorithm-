// Minimum number of squres whose sum equals to given number 'n'.
// Examples: X = 26 = 4^2+3^2+1^2{3 numbers}
//  or 5^2 + 1^2{2 numbers}
//  Minimum number of numbers required= 2;
//  Recurrence Relation
//  Base Case: f(0) = 0
//  f(1) = 1{1^2}
//  f(2) = 2{1^2 + 1^2}
//  f(3) = 3{1^2 + 1^2 + 1^2}
//  f(x) = min(f(x-i*i) + 1)

// Minimum number of squres whose sum equals to given number 'n'
// Overlapping Subproblem:
// (1) Write the recursion solution.
// (2) Memorize it in dp table.

// This is Memorisation Approach
// #include <bits/stdc++.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

const int N = 1e5+2, MOD = 1e9+7;
// int dp[N];
// int MinSqure(int n){
//     if (n == 1 || n == 2 || n== 3 || n == 0)
//     {
//         return 0;
//     }
//     if (dp[n] != MOD)
//     {
//         return dp[n];
//     }
    
//     // int ans = MOD;
//     for (int i = 1; i*i<= n; i++)
//     {
//         dp[n] = min(dp[n], 1 + MinSqure(n-i*i));
//     }

//     return dp[n];
    
    
// } 

// signed main(){

//     rep(i,0,N)
//         dp[i] = MOD;
//     int n;
//     cin>>n;
//     cout<<MinSqure(n)<<endl;
//     return 0;
// }

// using buttom approach
signed main(){
    int n;
    cin>>n;
    // Internally make lookup table for building buttomup
    // vi is the vector of int
    vi dp(n+1, MOD); 
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for (int i = 1; i*i <=n; i++)
    {
        for (int j = 0; i*i+j <=n; j++)
        {
            dp[i*i +j] = min(dp[i*i +j], 1+dp[j]);
        }
        
    }
    cout<<dp[n]<<endl;
    // return dp[n];
    

    return 0;

}