#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a.begin(), a.end());

    int l = -1, r = -1, ansL = -1, ansR = -1;
    for(int i = 0; i < n; i++)
    {
        if(mp[a[i]] < k) continue;

        if(l == -1) l = a[i];
        
        if(i == n - 1 || a[i + 1] - a[i] > 1 || mp[a[i + 1]] < k)
        {
            r = a[i];
            if(r - l >= ansR - ansL)
            {
                ansL = l, ansR = r;
            }
            l = -1, r = -1;
        }
    }
    if(ansL == -1 || ansR == -1)
        cout << -1 << nl;
    else    
        cout << ansL << " " << ansR << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}