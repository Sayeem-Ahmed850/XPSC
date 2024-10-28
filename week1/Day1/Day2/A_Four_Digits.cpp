#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;

    vector<int> v;

    for (int i = 0; i < 4; i++)
    {
        int x = n % 10;
        v.push_back(x);
        n = n / 10;
    }
    reverse(v.begin(), v.end());

    for (int val : v)
        cout << val;
    return 0;
}