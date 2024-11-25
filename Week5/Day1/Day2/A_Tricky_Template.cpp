#include <bits/stdc++.h>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    string a, b, c;
    cin >> a >> b >> c;

    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        if(c[i] != a[i] && c[i] != b[i])
        {
            flag = true;
            break;
        }
    }
    if(flag) yes;
    else no;
    
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}