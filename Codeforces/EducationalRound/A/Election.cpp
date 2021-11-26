#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
void solve()
{
    int n;
    cin >> n;
    int ar[n];
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        s += ar[i];
    }
    int m = *max_element(ar, ar + n);
    for (int i = m;; i++)
    {
        int tem = 0;
        for (int j = 0; j < n; j++)
        {
            tem += i - ar[j];
        }
        if (tem > s)
        {
            cout << i << endl;
            return;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int tc;
    // cin>>tc;
    // while(tc--)
    // {
    //     solve();
    // }
    solve();
    return 0;
}

#include <bits/stdc++.h>

// #define itn int
#define ll long long
#define double long double
//#define endl '\n'
#define p_b push_back
#define fi first
#define se second
#define pii pair<int, int>
#define oo LLONG_MAX
#define elif else if

using namespace std;

//int a[100005], t[400005];
//itn n;
//
//void build(int v, int l, int r)
//{
//    if(l+1==r)
//    {
//        t[v]=a[l];
//        return;
//    }
//    int mid=(l+r)/2;
//    build(2*v, l, mid);
//    build(2*v+1, mid, r);
//    t[v]=t[2*v]+t[2*v+1];
//}
//
//void change(int v, int l, int r, int q, int val)
//{
//    if(l+1==r)
//    {
//        t[v]=val;
//        return;
//    }
//    int mid=(l+r)/2;
//    if(q<mid)
//        change(2*v, l, mid, q, val);
//    else
//        change(2*v+1, mid, r, q, val);
//    t[v]=t[2*v+1]+t[2*v];
//}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //        freopen("apbtest.in", "r", stdin);
    //        freopen("apbtest.out", "w", stdout);

    ll a, n, s = 0, mx = -oo;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        cin >> a;
        mx = max(a, mx);
        s += a;
    }
    cout << max((2 * s + n) / n, mx);
}
