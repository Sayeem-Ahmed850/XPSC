#include <bits/stdc++.h>
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> divisor;
    for(int i = 1; i * i <= n; ++i)
    {
        if(i == 1 || i == n){
            continue;
        }
        if(divisor.size() >= 2){
            break;
        }

        if(n % i == 0){
            divisor.push_back(i);
            if(i != n / i){
                divisor.push_back(n / i);
            }
        }
    }

    int a, b;
    if(divisor.size() == 0){
        a = n, b = 0;
    }
    else if(divisor.size() == 1){
        a = divisor[0], b = divisor[0];
    }
    else{
        a = divisor[0], b = divisor[1];
    }
    int x = (a | b), y = (a ^ b);
    cout << x << " " << y << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}