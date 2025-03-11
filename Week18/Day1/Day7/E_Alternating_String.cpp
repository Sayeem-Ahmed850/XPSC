// problem link : https://codeforces.com/problemset/problem/2008/E
#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;
    string s; cin >> s;

    map<char, int> even, odd;
    for(int i = 0; i < n; i++)
    {
        if(i%2 == 0) even[s[i]]++;
        else odd[s[i]]++;
    }

    if(n%2 == 0)
    {
        int mx1 = 0, mx2 = 0;
        for(auto[x, y] : even) mx1 = max(mx1, y);
        for(auto[x, y] : odd) mx2 = max(mx2, y);
        cout << (n/2)-mx1+(n/2)-mx2 << nl;
    }
    else
    {
        int ans = INT_MAX;
        map<char, int> curr_even, curr_odd;
        for(int i = 0; i < n; i++)
        {
            if(i%2 == 0) even[s[i]]--;
            else odd[s[i]]--;

            for(auto[x, y] : even) curr_odd[x] += y;
            for(auto[x, y] : odd) curr_even[x] += y;

            int mx1 = 0, mx2 = 0;
            for(auto[x, y]:curr_even) mx1 = max(mx1, y);
            for(auto[x, y]:curr_odd) mx2 = max(mx2, y);
    
            int tmp = (n/2)-mx1+(n/2)-mx2+1;
            ans = min(ans, tmp);
    
            for(auto[x, y]:even) curr_odd[x] -= y;
            for(auto[x, y]:odd) curr_even[x] -= y;
    
            if(i%2 == 0) curr_even[s[i]]++;
            else curr_odd[s[i]]++;
        }
        cout << ans << nl;
    }
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}