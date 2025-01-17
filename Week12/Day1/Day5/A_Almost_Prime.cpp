#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    int n, ans = 0; cin >> n;
    for(int j = 2; j <= n; j++)
    {
        int x = j;
        map<int, int> mp;
        for(int i = 2; i*i <= x; i++)
        {
            while(x%i == 0)
            {
                mp[i]++;
                x /= i;
            }
        }
        if(x > 1) mp[x]++;
        if(mp.size() == 2) ans++;
    }
    cout << ans;
    return 0;
}