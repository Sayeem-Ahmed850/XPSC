#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    
    int x_win = x / 3;
    int y_win = y / 3;

    int drw = x - x_win * 3;
    cout << drw << '\n';
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