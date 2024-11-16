#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string a, b;
    cin >> a >> b;

    int x[26] = {0};
    int y[26] = {0};
    for (char c : b)
    {
        x[c - 'a']++;
    }

    int l = 0, r = 0, ans = 0;
    while (r < a.size())
    {
        y[a[r] - 'a']++;
        if (r - l + 1 == b.size())
        {
            bool flag = true;
            for (int i = 0; i < 26; i++)
            {
                if (y[i] != x[i])
                {
                    flag = false;
                    break;
                }
            }
            if (flag) ans++;
            y[a[l] - 'a']--;
            l++, r++;
        }
        else r++;
    }

    cout << ans;
    return 0;
}