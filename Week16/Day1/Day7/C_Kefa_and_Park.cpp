#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int mxN = 1e5+5;
int n, m, ans = 0;

vector<int> a[mxN];
vector<int> cats(mxN);

void dfs(int i, int parent, int cnt)
{
    if(cats[i-1] == 1) cnt++;
    else cnt  = 0;
    if(cnt > m) return;
    if(a[i].size() == 1 && a[i][0] == parent)
    {
        ans++;
        return;
    }   
    for(auto val : a[i]) if(val != parent) dfs(val, i, cnt);
}

int main()
{
    FIO;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> cats[i];

    for(int i = 0; i < n-1; i++)
    {
        int u, v;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    dfs(1, -1, 0);
    cout << ans << nl;
    return 0;
}