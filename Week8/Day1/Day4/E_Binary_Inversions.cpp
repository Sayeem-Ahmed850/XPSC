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
    vector<int> a(n), x, y;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        x.push_back(a[i]);
        y.push_back(a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        if(x[i] == 0){
            x[i] = 1;
            break;
        }

    }
    for(int i = n-1; i >= 0; i--)
    {
        if(y[i] == 1){
            y[i] = 0;
            break;
        }
    }
    ll cnt1 = 0, cnt2 = 0, cnt3 = 0, ans1 = 0, ans2 = 0, ans3 = 0;
    for(int i = n-1; i >= 0; i--)
    {
        if(a[i] == 0) cnt1++;
        else ans1 += cnt1;

        if(x[i] == 0) cnt2++;
        else ans2 += cnt2;

        if(y[i] == 0) cnt3++;
        else ans3 += cnt3;
    }
    cout << max({ans1, ans2, ans3}) << nl;
}

int main()
{
    FIO;

    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}