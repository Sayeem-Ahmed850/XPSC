#include <bits/stdc++.h>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;

    if(m > n){
        no;
    }
    else{
        int x = n - m;
        if(x % 2 == 0) yes;
        else no;
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