#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int n, m;
int a[205][205];

ll ans = 0, sum = 0;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    else
        return true;
}

void dfs1(int si, int sj)
{
    int ci = si - 1;
    int cj = sj + 1;
    if (valid(ci, cj))
    {
        sum += a[ci][cj];
        dfs1(ci, cj);
    }
}

void dfs2(int si, int sj)
{
    int ci = si + 1;
    int cj = sj - 1;
    if (valid(ci, cj))
    {
        sum += a[ci][cj];
        dfs2(ci, cj);
    }
}

void dfs3(int si, int sj)
{
    int ci = si - 1;
    int cj = sj - 1;
    if (valid(ci, cj))
    {
        sum += a[ci][cj];
        dfs3(ci, cj);
    }
}

void dfs4(int si, int sj)
{
    int ci = si + 1;
    int cj = sj + 1;
    if (valid(ci, cj))
    {
        sum += a[ci][cj];
        dfs4(ci, cj);
    }
}

void solve()
{
    cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++) a[i][j] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) cin >> a[i][j];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dfs1(i, j);
            dfs2(i, j);
            dfs3(i, j);
            dfs4(i, j);

            sum += a[i][j];
            if (sum > ans) ans = sum;
            sum = 0;
        }
    }
    cout << ans << '\n';
    sum = 0, ans = 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--)
        solve();

    return 0;
}