// you are given an array of denomination and a value X. you need to 
// find the minimum number of coins required to make value X.

// Note:-We have infinite supplay of each coin

// Indian Coin Challenge
// Approach
// 1.Start from the largest value, till we can include it,take it.
// 2.Else move on the smaller value
// #include"bits/stdc++.h"
#include<iostream>
#include<stack>
#include<queue>
#include<algorithm>
#include<math.h>
#include<climits>
#include<vector>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a; i<b; i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

int main(){

    int n;
    cin>>n;

    vi a(n);
    rep(i,0,n)
       cin>>a[i];
    int x;
    cin>>x;


    sort(a.begin(), a.end(),greater<int>());
    int ans =0;
    // go to every denomanatin
    for (int i = 0; i < n; i++)
    {
        ans += x/a[i];
        x -=x/a[i] * a[i];
    }

    cout<<ans<<endl;
    
    return 0;

}