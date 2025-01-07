// problem link : https://codeforces.com/problemset/problem/1768/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int curr = 1, cnt = 0;
    for(auto val : a)
    {
        if(val == curr) curr++, cnt++;
    }
    
    int x = n-cnt;
    int ans = ceil(double(x)/double(k));
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}