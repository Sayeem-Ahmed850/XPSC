// problem link : https://codeforces.com/problemset/problem/1675/B
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
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = 0;
    for(int i = n-2; i >= 0; i--)
    {
        if(a[i] >= a[i+1])
        {
            while(a[i] > 0 && a[i] >= a[i+1])
            {
                a[i] = a[i]/2;
                ans++;
            }
        }
    }

    bool flag = true;
    for(int i = 0; i < n-1; i++)
    {
        if(a[i] >= a[i+1]){
            flag = false;
            break;
        }
    }

    if(flag) cout << ans << nl;
    else cout << -1 << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}