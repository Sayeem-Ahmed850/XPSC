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
    int n, k;
    cin >> n >> k;
    string s; cin >> s;

    int cnt = 0;
    for(char c : s) if(c == 'B') cnt++;
    if(cnt > k)
    {
        cout << 1 << nl;
        char c = 'A';
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'B') cnt--;
            if(cnt == k) {cout << i+1 << " " << c << nl; return;};
        }
    }
    else if(cnt < k)
    {
        cout << 1 << nl;
        char c = 'B';
        for(int i = 0; i < n; i++)
        {
            if(s[i] == 'A') cnt++;
            if(cnt == k) {cout << i+1 << " " << c << nl; return;};
        }
    }
    else cout << 0 << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}