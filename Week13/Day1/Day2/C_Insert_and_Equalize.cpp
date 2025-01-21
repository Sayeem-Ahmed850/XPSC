// problem link : https://codeforces.com/problemset/problem/1902/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    ll n, mx = LLONG_MIN; cin >> n;
    vector<ll> a(n);
    set<ll> st;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
        mx = max(a[i], mx);
    }

    if(n == 1)
    {
        cout << 1 << nl;
        return;
    }

    vector<ll> diff;
    for(int i = 0; i < n; i++) diff.push_back(mx-a[i]);
    ll x = 0;
    for(auto val : diff) x = __gcd<int64_t>(x, val);

    ll n1 = mx; bool flag = false;
    for(int i = 0; i < n; i++)
    {
        if(st.find(n1) == st.end())
        {
            flag = true;
            break;
        }
        n1 -= x;
    }

    if(!flag)
    {
        n1 = mx+x;
        mx = n1;
    }

    ll ans = 0;
    for(auto val : a) ans += (mx-val)/x;
    ans += abs(mx-n1)/x;
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;   
}