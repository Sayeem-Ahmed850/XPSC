#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    int x = v[n - 2] - v[1];
    int y = v[n - 1] - v[2];
    int z = v[n - 3] - v[0];

    cout << min({x, y, z}) << '\n';

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