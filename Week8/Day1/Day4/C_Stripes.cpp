// problem link : https://codeforces.com/problemset/problem/1742/C
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{   
    bool flag = false;
    for(int i = 0; i < 8; i++)
    {   
        string s; cin >> s;
        int R = count(s.begin(), s.end(), 'R');
        if(R == 8) flag = true;
    }
    if(flag) cout << "R" << nl;
    else cout << "B" << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}