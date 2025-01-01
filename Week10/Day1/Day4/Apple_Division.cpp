// problem link : https://cses.fi/problemset/task/1623
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n; cin >> n;
    vector<int> a(n);
    ll sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }

    ll ans = LLONG_MAX;
    for(int i = 0; i < (1 << n); i++)
    {
        ll g1 = 0;
        for(int j = n-1; j >= 0; j--)
        {
            if(i & (1 << j)) g1 += a[j];
        }
        ll g2 = sum - g1;
        ll diff = abs(g1-g2);
        ans = min(ans, diff);
    }
    cout << ans << nl;
    return 0;
}
