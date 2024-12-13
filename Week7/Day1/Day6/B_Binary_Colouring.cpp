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

    cout << 32 << nl;
    for(int i = 0; i < n; i++)
    {
        if(n & 1)
        {
            if(n & 2)
            {
                cout << -1 << " ";
                n++;
            }
            else
            {
                cout << 1 << " ";
            }
        }
        else{
            cout << 0 << " ";
        }
        n = n >> 1;
    }
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