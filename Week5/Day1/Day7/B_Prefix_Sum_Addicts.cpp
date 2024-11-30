#include <bits/stdc++.h>
#define ll long long int
#define yes cout << "Yes" << '\n'
#define no cout << "No" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    
    vector<ll> pre_sum(n + 1, 0), a(n + 1);
    for(int i = n-k+1; i <= n; i++) cin >> pre_sum[i];

    if(n == 1 || k == 1){
        yes;
        return;
    }

    for(int i = n; i >= n-k+2; i--){
        a[i] = (pre_sum[i] - pre_sum[i - 1]);
    }

    bool flag = true;
    for(int i = n-k+2; i <= n; i++){
        if(i + 1 <= n && a[i] > a[i + 1]){
            flag = false;
            break;
        }
    }

    if(!flag){
        no;
        return;
    }


    for(int i = n-k+1; i > 1; i--){
        a[i] = a[i + 1];
        pre_sum[i - 1] = pre_sum[i] - a[i];
    }
    a[1] = pre_sum[1];

    for(int i = 1; i <= n; i++){
        if(i + 1 <= n && a[i] > a[i + 1]){
            flag = false;
            break;
        }
    }
    if(flag) yes;
    else no;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}