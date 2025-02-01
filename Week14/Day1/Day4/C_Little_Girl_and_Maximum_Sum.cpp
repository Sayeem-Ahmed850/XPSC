// problem link : https://codeforces.com/problemset/problem/276/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for(auto &val : a) cin >> val;

    vector<int> b(n+1)  ;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        b[l]++;
        b[r+1]--;
    }

    vector<ll> p(n+1);
    p[0] = b[0];
    for(int i = 1; i < n; i++) p[i] = p[i-1]+b[i];  

    sort(a.rbegin(), a.rend());
    sort(p.rbegin(), p.rend());

    ll ans = 0;
    for(int i = 0; i < n; i++) ans += a[i]*p[i];
    cout << ans;

    return 0;
}