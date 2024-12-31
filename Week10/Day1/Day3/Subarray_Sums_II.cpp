//problem link : https://cses.fi/problemset/task/1661
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    ll n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    map<ll, ll> mp;
    mp[0]++;
    ll sum = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
        if(mp.find(sum-k) != mp.end())
        {
            ans += mp[sum-k];
            cout << mp[sum-k] << " ";
        }
        mp[sum]++;
    }
    cout << ans << nl;
    return 0;
}