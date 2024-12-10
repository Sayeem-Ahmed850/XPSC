#include <bits/stdc++.h>
#define ll long long int
#define pi pair<int, int>
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main()
{
    FIO;

    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(m + 1);
    for(int i = 0; i < m + 1; i++) cin >> a[i];

    int F = a.back(), ans = 0;

    for(int i = 0; i < m; i++)
    {
        int XOR = a[i] ^ F, cnt = 0;
        while (XOR != 0)
        {
            if(XOR & 1){
                cnt++;
            }
            XOR = XOR >> 1;
        }
        if(cnt <= k) ans++;
    }
    cout << ans;

    return 0;
}