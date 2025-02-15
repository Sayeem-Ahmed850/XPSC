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

    int x = 0, y = 0;
    for(int i = 0; i < n-2; i++)
    {
        x ^= i;
        y ^= i+1;
    }

    if(x != 0)
    {
        for(int i = 0; i < n-2; i++)
        {
            cout << i << " ";
        }
        cout << INT_MAX << " " << (INT_MAX^x) << nl;
    }
    else
    {
        for(int i = 1; i < n-1; i++)
        {
            cout << i << " ";
        }
        cout << INT_MAX << " " << (INT_MAX^y) << nl;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}