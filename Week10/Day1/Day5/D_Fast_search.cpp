// problem link : https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    FIO;
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int q; cin >> q;
    while(q--)
    {
        int x, y; cin >> x >> y;
        int l = 0, r = n-1;
        int ans1 = -1, ans2 = -1;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(a[mid] >= x)
            {
                ans1 = mid+1;
                r = mid-1;
            }
            else l = mid+1;
        }

        l = 0, r = n-1;
        while(l <= r)
        {
            int mid = (l+r)/2;
            if(a[mid] <= y)
            {
                ans2 = mid+1;
                l = mid+1;
            }
            else r = mid-1;
        }
        if(ans1 == -1 || ans2 == -1)
            cout << 0 << " ";
        else 
            cout << (ans2-ans1)+1 << " ";
    }
    return 0;
}