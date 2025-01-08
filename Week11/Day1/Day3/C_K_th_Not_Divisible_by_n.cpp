// problem link : https://codeforces.com/problemset/problem/1352/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    int l = 0, r = 2e9, mid, ans;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        if((mid-(mid/n)) >= k)
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
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