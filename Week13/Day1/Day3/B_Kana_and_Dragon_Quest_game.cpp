// problem link : https://codeforces.com/problemset/problem/1337/B
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
    int x, n, m;
    cin >> x >> n >> m; 
    while(true)
    {
        if(n > 0 && m > 0)
        {
            int tmp = x;
            tmp /= 2, tmp += 10;
            if(tmp >= x) 
                x -= 10, m--;
            else 
                x = tmp, n--;
        }
        else if(n > 0 && m == 0)
        {
            int tmp = x;
            tmp /= 2, tmp += 10;
            if(tmp >= x) break;
            x = tmp;
            n--;
        }
        else if(n == 0 && m > 0)
        {
            x -= 10;
            m--;
        }
        else break;
    }
    if(x <= 0) yes;
    else no;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}