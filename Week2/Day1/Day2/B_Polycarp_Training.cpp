#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int i = 1, day = 0;
    for(int val : v)
    {
        if(val >= i)
        {
            day++;
            i++;
        }
    }
    cout << day;
    return 0;
}