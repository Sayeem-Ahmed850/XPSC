#include <bits/stdc++.h>
#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void solve()
{
    int a, b, n;
    cin >> a >> b >> n;

    vector<int> tools(n);
    for (int i = 0; i < n; i++) cin >> tools[i];

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (tools[i] >= a) sum += (a - 1);

        else sum += (tools[i]);
    }
    cout << sum + b << '\n';
}

int main()
{
    FIO;

    int t; cin >> t;
    while (t--)
        solve();
    return 0;
}