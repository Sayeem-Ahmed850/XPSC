// problem link : https://codeforces.com/problemset/problem/1538/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());

    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        auto it1 = lower_bound(a.begin()+i+1, a.end(), l-a[i]);
        auto it2 = upper_bound(a.begin()+i+1, a.end(), r-a[i]);
        ans += it2-it1;
    }
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}