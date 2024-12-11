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
    int x; cin >> x;

    int mxBit = __lg(x), O = 0, Z = 0;

    for(int i = mxBit; i >= 0; i--)
    {
        if((x >> i) & 1){
            O++;
        }
        else{
           if(O > 1) Z++;
        }
    }

    if((x - pow(2, mxBit)) > 1)
        cout << pow(2, Z) << nl;
    else
        cout << 1 << nl;
}

int main()
{
    FIO;
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}