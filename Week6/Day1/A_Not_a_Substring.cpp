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
    string s; cin >> s;
    if(s == "()"){
        no;
        return;
    }

    int n = s.size();
    bool flag = false;
    for(int i = 0; i < n - 1; i++)
    {
        if(s[i] == '(' && s[i + 1] == '(') flag = true;
        if(s[i] == ')' && s[i + 1] == ')') flag = true;
    }

    string ans;
    if(flag)
    {
        for(int i = 0; i < n; i++) ans += "()";
    }
    else
    {
        for(int i = 0; i < n; i++) ans.push_back('(');
        for(int i = 0; i < n; i++) ans.push_back(')');
    }
    yes;
    cout << ans << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}