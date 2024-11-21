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

    int sizeA = n * (n - 1) / 2;

    vector<int> b(sizeA);
    for(int i = 0; i < sizeA; i++) cin >> b[i];

    vector<pi> v;
    map<int, int> mp;
    for(int i = 0;  i < sizeA; i++)
    {
        mp[b[i]]++;
    }

    for(auto[x, y] : mp) v.push_back({y, x});
    sort(v.begin(), v.end());

    vector<int> a;
    a.push_back(v.front().second + 2);

    for(int i = 0; i < n - 1; i++)
    {
        if(i > v.size() - 1) a.push_back(v.rbegin()->second);
        else a.push_back(v[i].second);
    }
    reverse(a.begin(), a.end());
    for(auto val : a) cout << val << " ";
    cout << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}