// problem link : https://codeforces.com/problemset/problem/1729/D
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
    vector<int> a(n), b(n);
    for(int i = 0;i < n; i++) cin >> a[i];
    for(int i = 0;i < n; i++) cin >> b[i];

    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        v.push_back(b[i] - a[i]);
    }
    sort(v.begin(), v.end());

    int l = 0, r = n-1, ans = 0; 
    while (l < r)
    {
        if(v[l] < 0 && v[r] < 0)
        {
            break;
        }
        else
        {
            int sum = (v[l] + v[r]);
            if(sum >= 0)
            {
                ans++;
                l++, r--;
            }
            else
            {
                if(v[l] < 0) l++;
                else r++;
            }
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