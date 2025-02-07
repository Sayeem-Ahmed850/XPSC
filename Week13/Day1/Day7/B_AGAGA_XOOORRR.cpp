#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

// int p[2005];

void solve()
{
    int n; cin >> n;    
    vector<int> p(n+1);
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        p[i] = (p[i-1]^x);    
    }

    bool flag1 = false, flag2 = false;
    if(p[n] == false) flag1 = true;
    
    for(int i = 1; i <= n; i++)
    {
        if(p[i] == p[n]) flag2 = true;
        if(!p[i] && flag2) flag1 = true;
    }
    if(flag1) yes;
    else no;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}