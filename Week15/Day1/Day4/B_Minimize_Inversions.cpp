#include <bits/stdc++.h>
#define pi pair<int, int>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &val : a) cin >> val;
    for(auto &val : b) cin >> val;

    vector<pi> v(n);
    for(int i = 0; i < n; i++)
    {
        v[i].first = a[i];
        v[i].second = b[i];
    }
    sort(v.begin(), v.end());
    
    for(auto val : v) cout << val.first << " ";
    cout << nl;
    for(auto val : v) cout << val.second << " ";
    cout << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}