#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }

    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        ll minOdd = LLONG_MAX;
        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                if (v[i] < minOdd)
                    minOdd = v[i];
            }
        }
        cout << sum - minOdd;
    }
    return 0;
}
