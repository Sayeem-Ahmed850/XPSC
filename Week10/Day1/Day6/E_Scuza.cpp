// problem link : https://codeforces.com/problemset/problem/1742/E
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<ll> p(n), b(n);
    p[0] = a[0];
    b[0] = a[0];
    for(int i = 1; i < n; i++) 
    {
        p[i] = p[i-1]+a[i];
        b[i] = max(a[i], b[i-1]);
    }
    while(q--)
    {
        int key; cin >> key;
        int i = upper_bound(b.begin(), b.end(),key)-b.begin();
        if(i-1<0) cout << 0 << " ";
        else cout << p[i-1] << " ";
    }
    cout << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}