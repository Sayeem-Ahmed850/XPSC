// problem link : https://codeforces.com/problemset/problem/1324/D
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n; cin >> n;
    vector<int> a(n), b(n);
    for(auto &val : a) cin >> val;
    for(auto &val : b) cin >> val;

    vector<int> c(n);
    for(int i = 0; i < n; i++) c[i] = a[i]-b[i];    
    sort(c.begin(), c.end());

    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(c[i] > 0) 
        {
            int idx = lower_bound(c.begin(), c.end(), -c[i]+1) - c.begin();
            ans += i-idx;
        }
    }
    cout << ans << nl;
    return 0;
}