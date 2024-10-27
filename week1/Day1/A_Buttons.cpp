#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int a, b;
    cin >> a >> b;

    int x = a + b;
    int y = a + (a - 1);
    int z = b + (b - 1);

    int ans = max({x, y, z});

    cout << ans;

    return 0;
}