// problem link : https://codeforces.com/problemset/problem/1121/B
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
    for(auto &val : a) cin >> val;

    map<int, int> mp;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            int sum = a[i]+a[j];
            mp[sum]++;
            ans = max(ans, mp[sum]);
        }
    }
    cout << ans << nl;
    return 0;
}