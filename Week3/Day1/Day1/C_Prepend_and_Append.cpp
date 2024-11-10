#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    if(s.size() < 1)
    {
        cout << s.size() << '\n';
        return;
    }

    int l = 0, r = s.size() - 1;
    int cnt = 0;
    while(l < r)
    {
        if(s[l] == s[r]) break;
        cnt++;
        l++, r--;
    }

    int ans = s.size() - (cnt + cnt);
    cout << ans << '\n';
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