#include <bits/stdc++.h>
#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;

    ll n, s;
    cin >> n >> s;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll sum = 0;
    int l = 0, r = 0, ans = 0;

    while(r < n)
    {
        sum+=a[r];  
        if(sum > s)
        {
            sum -= a[l];
            l++;
        }
        else
        {
            ans = max(ans, (r - l) + 1);
        }
        r++;
    }
    cout << ans;
    return 0;
}