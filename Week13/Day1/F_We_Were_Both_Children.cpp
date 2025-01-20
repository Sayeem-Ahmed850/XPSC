// problem link : https://codeforces.com/problemset/problem/1850/F
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<ll> a(n+1), d(n+1);
    map<ll, ll> mp;
    for(int i = 1; i <= n; i++) 
    {
        cin >> a[i];
        mp[a[i]]++;
    }  

    for(auto[x, y]:mp)
    {
        for(int j = x; j <= n; j += x) d[j] += y;
    }
    cout << *max_element(d.begin(), d.end()) << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}