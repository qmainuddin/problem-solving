#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int t;
    ll s, n, x, y;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> s;
        n = ceil(sqrt((double) s));
        if((n*n-s)<n) x=n, y=n*n-s+1;
        else y=n, x=s-((n-1) * (n-1));
        if(n&1) x = x^y, y = x^y, x = x^y;
        cout << "Case " << i << ": " << x << " " << y << endl;
    }
    return 0;
}
