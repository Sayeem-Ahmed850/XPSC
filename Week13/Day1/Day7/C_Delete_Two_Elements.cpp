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
    int n; cin >> n;
    vector<int> a(n);
    map<int, int> mp;
    ll sum = 0;
    for(auto &val : a)
    {
        cin >> val;
        sum += val;
        mp[val]++;
    }

    if((1LL*2*sum)%n != 0)
    {
        cout << 0 << nl;
        return;
    }

    ll ans = 0, k = (1LL*2*sum)/n;
    for(int i = 0; i < n; i++)
    {
        ll x = k-a[i];
        if(mp.find(x) != mp.end()) ans += mp[x];
        if(a[i] == x)  ans--;
    }

    cout << ans/2<< nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}