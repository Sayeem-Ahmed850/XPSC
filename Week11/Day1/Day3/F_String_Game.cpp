// problem link : https://codeforces.com/edu/course/2/lesson/6/2/practice/contest/283932/problem/F
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i], a[i]--;

    bool flag = false;
    auto ok = [&](int mid)
    {
        vector<bool> v(n);  
        for(int i = 0; i <= mid; i++)
        {
            v[a[i]] = true;
        }
        int j = 0;
        for(int i = 0; i < n; i++)
        {
            if(!v[i] && t[i] == p[j]) j++;
            if(j == m)
            {
                flag = true;
                return true;
            }
        }
        return false;
    };

    int l = 0, r = n-1, mid, ans = 0;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }

    if(flag) cout << ans+1 << nl;
    else cout << ans << nl;
    return 0;
}