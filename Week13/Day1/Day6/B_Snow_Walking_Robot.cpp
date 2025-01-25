// problem link : https://codeforces.com/problemset/problem/1272/B
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
    int L = 0, R = 0, U = 0, D = 0;
    for(char c : s)
    {
        if(c == 'L') L++;
        if(c == 'R') R++;
        if(c == 'U') U++;
        if(c == 'D') D++;
    }


    int x = min(L, R), y = min(U, D);   
    if(x == 0 && y == 0) cout << 0 << nl;
    else if(x == 0 || y == 0)
    {
        cout << 2 << nl;
        if(x == 0)cout << "UD" << nl;
        else cout << "LR" << nl;
    }
    else
    {
        cout << (x*2)+(y*2) << nl;
        for(int i = 0; i < y; i++) cout << "U";
        for(int i = 0; i < x; i++) cout << "R";
        for(int i = 0; i < y; i++) cout << "D";
        for(int i = 0; i < x; i++) cout << "L";
        cout << nl;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}