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
    int m = n * (n - 1) / 2;

    vector<int> a, b(m);
    for(int i = 0; i < m; i++) cin >> b[i];
    sort(b.begin(), b.end());

    int j = 1, x = n - 1;
    for(int i = 0; i < m; i++)
    {
        if(j == x)
        {
            a.push_back(b[i]);
            j = 0;
            x--;
        }
        j++;
    }

    for(auto val : a) cout << val << " ";
    cout << 1000000000 << nl;
    
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--)
        solve();
    
    return 0;
}
