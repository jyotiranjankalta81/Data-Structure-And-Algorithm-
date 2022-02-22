#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        int x;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>x;
            ans=ans | x;
        }
        cout<<ans<<endl;
        

    }
    return 0;
}