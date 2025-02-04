// problem link : https://codeforces.com/problemset/problem/1676/H1
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n);
    for(auto &val : a) cin >> val;

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j  = i+1; j < n; j++)
        {
            if(a[i] >= a[j]) ans++;
        }
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