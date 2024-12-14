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

    int l = 0, r = n-1, cnt = 0;
    while(l < r)
    {
        if(s[l] != s[r]) cnt++;
        l++, r--;
    }

    for(int i = 0; i < n+1; i++)
    {
        if(i >= cnt && i <= n-cnt && (n & 1 || (i - cnt)%2 == 0))
        {
            cout << 1;
        }
        else{
            cout << 0;
        }
    }
    cout << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}