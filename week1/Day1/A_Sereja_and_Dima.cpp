#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int s = 0, d = 0;

    int l = 0, r = n - 1;
    int i = 0;
    while(l <= r)
    {
        if(i % 2 == 0)
        {
            if(a[l] > a[r])
            {
                s += a[l];
                l++;
            }
            else
            {
                s += a[r];
                r--;
            }
        }
        else
        {
            if(a[l] > a[r])
            {
                d += a[l];
                l++;
            }
            else
            {
                d += a[r];
                r--;
            }
        }
        i++;
    }

    cout << s << " " << d;






    return 0;
}