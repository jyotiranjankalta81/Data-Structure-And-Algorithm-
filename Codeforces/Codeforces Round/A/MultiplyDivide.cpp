#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod=1000000007;
using namespace std;

void solve()
{
   ll n;cin>>n;
   vector<ll> a(n);
   ll mul=0;
   for(int i=0;i<n;i++){
     cin>>a[i];
     while(a[i]%2==0){
       mul++;a[i]/=2;
     }
   }
   ll ans=0;
   sort(a.begin(),a.end());
   for(int i=1;i<=mul;i++) a.back()*=2;
   
   for(int i=0;i<n;i++) ans+=a[i];
   cout<<ans<<endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);cout.tie(0);
  int t=1;cin>>t;
  while(t--)
  {
    solve();
  }
  return 0;
}