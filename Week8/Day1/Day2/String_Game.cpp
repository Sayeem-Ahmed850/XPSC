// problem link : https://www.codechef.com/problems/STRAME
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    int one = count(s.begin(), s.end(), '1');
    int zero = count(s.begin(), s.end(), '0');

    if(min(one, zero) % 2 == 0) cout << "Ramos" << nl;
    else cout << "Zlatan" << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}