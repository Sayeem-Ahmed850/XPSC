// problem link : https://codeforces.com/problemset/problem/1933/C
#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int a, b, l;
    cin >> a >> b >> l;

    set<int> k;
    for(int i = 0; i <= 20; i++)
    {
        for(int j = 0; j <= 20; j++)
        {
            ll x = (int)(pow(a, i)+0.5), y = (int)(pow(b, j)+0.5);
            ll val = x*y;
            if(val > l) break;
            if(l % val == 0) k.insert(l/val);
        }
    }
    cout << k.size() << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}