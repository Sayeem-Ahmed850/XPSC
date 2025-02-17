// problem link : https://codeforces.com/problemset/problem/1900/C
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int mxN = 3e5+5;
vector<int> a[mxN], b(mxN);
string s;

void dfs(int node)
{
   if(a[node][0] != 0)
   {
      int val = a[node][0];
      if(s[node-1] == 'L') b[val] = b[node];
      else b[val] = b[node]+1;
      dfs(val);
   }

   if(a[node][1] != 0)
   {
      int val = a[node][1];
      if(s[node-1] == 'R') b[val] = b[node];
      else b[val] = b[node]+1;
      dfs(val);
   }
}

void solve()
{
   int n;
   cin >> n >> s;
   for(int i = 1; i <= n; i++)
   {
      a[i].clear();
      b[i] = 0;
   }
   for(int i = 1; i <= n; i++)
   {
      int l, r;
      cin >> l >> r;
      a[i].push_back(l);
      a[i].push_back(r);
   }
   dfs(1);

   int ans = INT_MAX;
   for(int i = 1; i <= n; i++)
   {
      if(a[i][0] == 0 && a[i][1] == 0) ans = min(ans, b[i]);
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