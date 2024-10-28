#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int cnt = 1;

    int i = min(a, b);
    int n = max(a, b);
    
    if(c == 0) 
    {
        cout << i;
        return;
    }

    for (i; i <= n; i++)
    {
        if (c * cnt < i)
        {
            cnt++;
        }
        if (c * cnt == i)
        {
            cout << i;
            return;
        }
    }
    cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}