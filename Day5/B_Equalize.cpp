// problem link : https://codeforces.com/problemset/problem/1928/B
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    map<int, int> mp;
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
        if(mp[x] <= 1) a.push_back(x);
    }
    sort(a.begin(), a.end());

    int l = 0, ans = 1;
    for(int i = 0; i < a.size(); i++)
    {
        while(a[i]-a[l] >= n) l++;
        ans = max(ans, i - l+1);
    }
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}