#include <bits/stdc++.h>
#define ll long long int
#define pi pair<long long int, long long int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, c, q;
    cin >> n >> c >> q;
    string s; cin >> s;

    ll curr = n;
    vector<pi> a(c), b(c);
    for(int i = 0; i < c; i++)
    {
        cin >> a[i].first >> a[i].second;
        ll x = a[i].second-a[i].first+1;
        b[i].first = curr+1;
        b[i].second = curr + x;
        curr = b[i].second;
    }
    
    while(q--)
    {
        int k; cin >> k;
        for(int i = c-1; i >= 0; i--)
        {
            if(k >= b[i].first && k <= b[i].second)
            {
                ll diff = k-b[i].first;
                k = a[i].first + diff;
            }
        }
        cout << s[k-1] << nl;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}