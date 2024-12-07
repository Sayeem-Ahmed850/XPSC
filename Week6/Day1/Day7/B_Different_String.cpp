// problem link : https://codeforces.com/problemset/problem/1971/B
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

    int n = s.size();
    int same = 0;
    for(int i = 0; i < n-1; i++)
    {
        if(s[i] == s[i + 1]) same++;
    }

    if(same == n-1){
        no;
        return;
    }

    yes;
    string ans;
    ans += s;
    sort(ans.begin(), ans.end());

    if(ans == s){
        sort(ans.begin(), ans.end(), greater<int>());
        cout << ans << nl;
    }
    else{
        cout << ans << nl;
    }
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}