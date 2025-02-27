// problem link : https://codeforces.com/problemset/problem/1884/B
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
    string s; cin >> s;

    int j = 0; ll ans = 0;
    for(int i = n-1; i >= 0; i--)
    {
        if(s[i] == '0') 
        {
            j++;
            ans += n-i-j;   
            cout << ans << " ";
        }
    }

    int one = 0;
    for(char c : s) if(c == '1') one++;
    for(int i = 0; i < one; i++) cout << -1 << " ";
    cout << nl; 
}

int main()
{
    FIO;
    int t; cin >> t;    
    while(t--) solve();
    return 0;
}