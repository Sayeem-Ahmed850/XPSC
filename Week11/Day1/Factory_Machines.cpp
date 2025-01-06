// problem link : https://cses.fi/problemset/task/1620
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n, t; 
    cin >> n >> t;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    auto flag = [&](ll sec)
    {
        ll cnt =  0;
        for(int i = 0; i < n; i++)
        {
            cnt += (sec/a[i]);
            if(cnt >= t) return true;
        }
        return false;
    };

    ll l = 0, r = 1e18, ans = -1;
    while(l <= r)
    {
        ll mid = (l+r)/2;   
        if(flag(mid))
        {
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout << ans << nl;
    return 0;
}   