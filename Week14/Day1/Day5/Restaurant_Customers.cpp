// problem link : https://cses.fi/problemset/task/1619
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n, a, b;
    cin >> n;
    
    map<int, int> mp;
    while(n--)
    {
        cin >> a >> b;
        mp[a]++;
        mp[b+1]--;
    }

    int sum = 0, ans = 0;
    for(auto[x, y]:mp) 
    {
        sum += y;
        ans = max(ans, sum);
    }
    cout << ans << nl;
    return 0;
}