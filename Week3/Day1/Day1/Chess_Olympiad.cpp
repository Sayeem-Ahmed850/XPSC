#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    
    int x, y, z;
    cin >> x >> y >> z;

    int rem = 4 - (x + y + z);
    float drw = y / 2;

    float t1 = x + rem + drw;
    float t2 = z + drw;

    if(t1 > t2)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}