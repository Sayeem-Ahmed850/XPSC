// problem link : https://codeforces.com/problemset/problem/1829/F
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
    int n, m;
    cin >> n >> m;
    map<int, set<int>> mp;
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        mp[u].insert(v);
        mp[v].insert(u);
    }
    
    int leaf; 
    for(auto[a, b]:mp)
    {
        if(b.size() == 1) {leaf = a; break;}
    }

    int x, y;
    for(auto[a, b]:mp)
    {
        if(b.find(leaf) != b.end())
        {
            y = b.size()-1;
            leaf = a;
            break;
        }
    }

    for(auto[a, b]:mp)
    {
        if(b.find(leaf) != b.end() && b.size() > 1)
        {
            x = b.size();
            break;
        }
    }
    cout << x << " " << y << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}