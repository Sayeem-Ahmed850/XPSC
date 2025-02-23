// problem link : https://codeforces.com/contest/1676/problem/G
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 1; i < n; i++) cin >> a[i];

    string s; cin >> s;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'B') v[i] = 1;
        else v[i]  = -1;        
    }

    for(int i = n-1; i >= 1; i--) v[--a[i]] += v[i];

    int ans = 0;
    for(int i = 0; i < n; i++) if(v[i] == 0) ans++;
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}