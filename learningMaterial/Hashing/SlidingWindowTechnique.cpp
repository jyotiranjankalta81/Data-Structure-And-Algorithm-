// Optimal Solution
// (1) - Compute sum of the first k elements (i=0 to k)
// (2) - while incresing i, substract a[i-1] and add a[i+k-1] in the previous sum,
// which willl became current sum.
// Dry Run
// (3) - Do the above process till i=5 and maintain the minimum
// Time Complexity:0(n) Much better
#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<map>
#include<string>
#include<math.h>
#include<climits>
#include<vector>
using namespace std;

// define int long long 
#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define if first
#define ss second
#define setBits(x) builtin_popcount(x)


int main(){

    int n,k;
    cin>>n>>k;

    vi a(n);
    rep(i,0,n)
     cin>>a[i];
    
    int s = 0,ans = INT_MAX;
    rep(i,0,k){
        s += a[i];
    }
    ans = min(ans,s);
    // cout<<s<<" ";

    // sliding windows
    rep(i,1,n-k+1){
        s -= a[i-1];
        s += a[i+k-1];
        ans = min(ans, s);
        // cout<<s <<" ";
    }
    cout<<ans<<endl;

    return 0;

}