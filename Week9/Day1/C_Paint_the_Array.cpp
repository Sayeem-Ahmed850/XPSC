// problem link : https://codeforces.com/problemset/problem/1618/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll g1 = 0, g2 = 0;
    for(int i = 0; i < n; i += 2)
    {
        g1 = __gcd(g1, a[i]);
    }
    for(int i = 1; i < n; i += 2)
    {
        g2 = __gcd(g2, a[i]);
    }

    bool flag = true;
    for(int i = 1; i < n; i+= 2)
    {
        if(a[i] % g1 == 0){
            flag = false;
            break;
        }
    }

    if(flag){
        cout << g1 << nl;
        return;
    }
    flag = true;
    for(int i = 0;i < n; i+= 2)
    {
        if(a[i] % g2 == 0){
            flag = false;
            break;
        }
    }

    if(flag) cout << g2 << nl;
    else cout << 0 << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}