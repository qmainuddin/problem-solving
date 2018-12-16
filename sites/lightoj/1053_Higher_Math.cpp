#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int t;

    cin >> t;

    for(int i=1; i<=t; i++)
    {
        ll x,y,z;
        cin >> x >> y >> z;
        bool isTriangle = false;

        if(sqrt((x*x) + (y*y)) == z) isTriangle = true;
        if(sqrt((z*z) + (y*y)) == x) isTriangle = true;
        if(sqrt((x*x) + (z*z)) == y) isTriangle = true;
        cout << "Case " << i << ": ";
        if(isTriangle) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}
