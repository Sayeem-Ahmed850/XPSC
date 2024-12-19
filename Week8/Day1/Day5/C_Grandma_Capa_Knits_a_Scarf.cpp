// problem link : https://codeforces.com/problemset/problem/1582/C
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

    set<char> st;
    for(char c : s) st.insert(c);

    int ans = INT_MAX;
    bool flag = false;
    for(auto curr_c : st)
    {
        int l = 0, r = n-1, cnt = 0;
        bool flag1 = true;
        while(l <= r)
        {
            if(s[l] == s[r])
            {
                l++, r--;
            }
            else if(s[l] == curr_c) 
            {
                l++, cnt++;
            }
            else if(s[r] == curr_c)
            {
                r--, cnt++;
            }
            else
            {
                flag1 = false;
                break;
            }
        }
        if(flag1){
            ans = min(ans, cnt);
            flag = true;
        }
    }
    if(flag) cout << ans << nl;
    else cout << -1 << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}