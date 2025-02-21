// problem link : https://codeforces.com/problemset/problem/1829/E
#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

const int mxN = 1005;
int n, m,sum = 0, ans = 0;

int a[mxN][mxN];
bool vis[mxN][mxN];

vector<pi> d = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool valid(int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= m) return false;
    else return true;
}

void dfs(int si, int sj)
{
    sum += a[si][sj];
    vis[si][sj] = true;
    for(int i = 0; i < 4; i++)
    {
        int ci = si+d[i].first;
        int cj = sj+d[i].second;  
        if(valid(ci, cj) && !vis[ci][cj] && a[ci][cj] != 0)
        {
            dfs(ci, cj);
        }
    }
}


void solve()
{
    cin >> n >> m;  
    
    sum = 0, ans = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            a[i][j] = 0;
            vis[i][j] = false;
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++) cin >> a[i][j];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(!vis[i][j] && a[i][j] != 0)
            {
                dfs(i, j);
                ans = max(ans, sum);
                sum = 0;
            }
        }
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
