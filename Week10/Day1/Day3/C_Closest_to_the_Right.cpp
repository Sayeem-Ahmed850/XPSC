// problem link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(k);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < k; i++) cin >> b[i];

    for(int i = 0; i < k; i++)
    {
        int l = 0, r = n-1, ans = n+1;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(a[mid] >= b[i])
            {
                ans = mid+1;
                r = mid-1;
            }   
            else l = mid+1;
        }
        cout << ans << nl;
    }
    return 0;
}