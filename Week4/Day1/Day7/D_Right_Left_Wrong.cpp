#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> a(n);
    ll sum = 0;
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
        sum += a[i];
    }
    string s; cin >> s;

    ll ans = 0;
    int l = 0, r = n - 1;
    while(l < r)
    {
        if(s[l] == 'L' && s[r] == 'R')
        {
            ans += sum;
            sum -= a[l];
            sum -= a[r];
            l++, r--;
        }
        else if(s[l] == 'R') 
        {
            sum -= a[l]; l++;
        }
        else
        {
            sum -= a[r]; r--;
        }
    }
    cout << ans << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}