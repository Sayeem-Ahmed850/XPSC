// problem link : https://codeforces.com/problemset/problem/1033/A
#include <bits/stdc++.h>
using namespace std;

int mat[1005][1005];
int n;
bool vis[1005][1005];
int dx[8] = {1, 0, -1, 0, -1, 1, -1, 1};
int dy[8] = {0, 1, 0, -1, -1, 1, 1, -1};

bool valid(int i, int j)
{
    if (i >= 1 && i <= n && j >= 1 && j <= n)
        return true;
    else
        return false;
}

void bfs(int kx, int ky)
{
    queue<pair<int, int>> q;
    q.push({kx, ky});
    vis[kx][ky] = true;
    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        for (int i = 0; i < 8; i++)
        {
            int DX, DY;
            DX = dx[i] + x;
            DY = dy[i] + y;
            if (!vis[DX][DY] && valid(DX, DY))
            {
                vis[DX][DY] = true;
                q.push({DX, DY});
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;

    int ax, ay;
    int bx, by;
    int cx, cy;

    cin >> ax >> ay;
    cin >> bx >> by;
    cin >> cx >> cy;

    for (int i = 0; i < 8; i++)
    {
        int DX = dx[i] + ax;
        int DY = dy[i] + ay;
        while (valid(DX, DY))
        {
            vis[DX][DY] = true;
            DX += dx[i];
            DY += dy[i];
        }
    }
    bfs(bx, by);

    if (vis[cx][cy])
        cout << "YES";
    else
        cout << "NO";
    return 0;
}