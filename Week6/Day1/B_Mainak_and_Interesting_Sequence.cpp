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
    int n, m;
    cin >> n >> m;
    if(n > m){
        no;
        return;
    }

    if(n % 2 == 1 && m % 2 == 1 || n % 2 == 1 && m % 2 == 0){
        yes;
        int s = 0;
        for(int i = 0; i < n - 1; i++){
            cout << 1 << " ";
            s++;
        }
        int ans = m - s;
        cout << ans << nl;
        return;
    }
    if(n % 2 == 0 && m % 2 == 0){
        yes;
        int s = 0;
        for(int i = 0; i < n - 2; i++){
            cout << 1 << " ";
            s++;
        }
        int ans = (m - s) / 2;
        cout << ans << " " << ans << nl;
        return;
    }
    no;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}