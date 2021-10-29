// Nth Fibonacci Number
// 0,1,1,2,3,5,8,13,21.....
// fib[n] = fib[n-1] + fib[n-2], Since we can write recurrence
// Optimal Substructure
// In introduction, we saw its overlapping subproblem property.
// we can Apply Dynamic Programming
// Time Complexity(without DP):O(2^n);
// Time Complexity(without DP):O(N);see the importance DP 
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
// this work till 10^3 afterthat creates error
// const int N = 1e3+2, MOD = 1e9+7;

// for memorize create a lookup table
const int N = 1e5+2, MOD = 1e9+7;
int dp[N];



int fib(int n){
    // if (n == 0)
    // {
    //     return 0;
    // }
    // if (n == 1)
    // {
    //     return 0;
    // }
    // if (n == 2)
    // {
    //     return 1;

    // }
    // if(dp[n] != -1){
    //     return dp[n];
    // }
    //  return dp[n] = fib(n-1) + fib(n-2);

    
    
}

signed main(){
    int n;
    cin>>n;

    // rep(i,0,N){
    //     dp[i] = -1;
    // }
    // cout<<fib(n)<<endl;

    vi dp(n+1);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 0;

    for (int i=3; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout<<dp[n]<<endl;
    

    return 0;
}
