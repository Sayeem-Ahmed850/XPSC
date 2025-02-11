// problem link : https://codeforces.com/problemset/problem/1796/B
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
    string a, b;
    cin >> a >> b;

    int n = a.size(), m = b.size();
    if(a[0] == b[0]) 
    {
        yes;
        cout << a[0] << "*" << nl;
    }
    else if(a[n-1] == b[m-1])
    {
        yes;
        cout << "*" << a[n-1] << nl;
    }
    else
    {
        for(int i = 0; i < n-1; i++)
        {
            string x; 
            x += a[i]; x += a[i+1];
            for(int j = 0; j < m-1; j++)
            {
                string y;
                y += b[j]; y += b[j+1];
                if(x == y)
                {
                    yes;
                    cout << "*" << x << "*" << nl;
                    return;
                }
            }
        }
        no;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}