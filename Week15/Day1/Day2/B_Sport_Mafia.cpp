// problem link : https://codeforces.com/problemset/problem/1195/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n, k;
    cin >> n >> k;

    ll l = 1, r = n, mid, ans = 0;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        ll x = 1LL * mid * (mid+1)/2;
        ll y = x - (n-mid);
        if(y == k)
        {
            ans = n-mid;
            break;
        }
        else if(y < k) l = mid+1;
        else r = mid-1;
    }
    cout << ans << nl;
    return 0;
}