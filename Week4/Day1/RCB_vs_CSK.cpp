#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int x, y;
    cin >> x >> y;

    int run = x - y;
    if(run >= 18)
        cout << "RCB";
    else
        cout << "CSK";
    return 0;
}