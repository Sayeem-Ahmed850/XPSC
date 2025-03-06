// problem link : https://codeforces.com/problemset/submission/2014/309233533
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, d, k;
    cin >> n >> d >> k;

    vector<int> a(n+1), b(n+1);
    while(k--)
    {
        int l, r;
        cin >> l >> r;
        a[l]++, b[r]++;
    }

    for(int i = 0; i < n; i++) a[i+1] += a[i];
    for(int i = 0; i < n; i++) b[i+1] += b[i];


    int mn = INT_MAX, mx = 0, mn_idx, mx_idx; 
    for(int i = d; i <= n; i++)
    {
        int x = a[i] - b[i-d];

        if(x > mx) mx = x, mx_idx = i-d+1;
        if(x < mn) mn = x, mn_idx = i-d+1;
    }

    cout << mx_idx << " " << mn_idx << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}