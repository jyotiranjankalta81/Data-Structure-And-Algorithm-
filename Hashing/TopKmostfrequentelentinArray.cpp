// Top K most frequent element in the stream
// Given an Array: |1 |2 |2 |2 |3 |4|
// and k= 2
// we have to output elements in decresing frequency till we reach (k+1)th distinct
// elements

// (1) - Create a map.
// (2) - While travelling,keep track of elements and when we find (k+1)th without/
// element=break
// (3) - Output the element and frequency using map

#include<iostream>
// #include<bits/stdc++.h>

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
#define ff first
// #define Pb push_back
#define ss second
#define setBits(x) builtin_popcount(x)

int main(){

    int n,k;
    cin>>n>>k;

    vi a(n);
    
    rep(i,0,n){
        cin>>a[i];
    }
    map<int,int>freq;

    rep(i,0,n)
    {
        int presentSize = freq.size();
        if(freq[a[i]] == 0 && presentSize == k)
        {
            break;
        }
        freq[a[i]]++;
        
    }
    vii ans;
    map<int,int> :: iterator it;
    for (it =freq.begin(); it!=freq.end(); it++)
    {
        if (it->ss !=0)
        {
            ans.push_back(it->ss, it->ff);
        }
        sort(ans.begin(), ans.end(), greater<pii>());


        vii ::iterator it1;
        for (it1= ans.begin(); it1!=ans.end(); it1++)
        {
            cout<<it1->ss<<" "<<it1->ff<<endl;
        }
        
        
        
    }
    return 0;
}