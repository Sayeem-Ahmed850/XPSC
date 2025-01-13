#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    ll n; cin >> n;
    
    ll l = 1, r = 2e9, mid, ans;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        if((mid*(mid-1))/2 <= n)
        {
            ans = mid; 
            l = mid+1;
        }
        else r = mid-1;
    }   
    ll x = n - ans*(ans-1)/2;
    cout << ans+x << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}