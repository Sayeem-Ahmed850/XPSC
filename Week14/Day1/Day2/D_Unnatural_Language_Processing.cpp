// problem link : https://codeforces.com/problemset/problem/1915/D
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;
    string x;
    for(char c : s)
    {
        if(c == 'a' || c == 'e') x.push_back('v');
        else x.push_back('c');
    }

    string ans;
    for(int i = 0; i < n-2; i++)
    {
        if(x[i] == 'c')
        {
            if(x[i+1] == 'c')
            {
                ans[ans.size()-1] = s[i];
                ans.push_back('.');
                continue;
            }
            else ans.push_back(s[i]);
        }
        if(x[i] == 'v')
        {
            ans.push_back(s[i]);
            ans.push_back('.');
        }
    }
    ans.push_back(s[n-2]);
    ans.push_back(s[n-1]);
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}