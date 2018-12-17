#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

int main()
{
    int t;

    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        ll w, n,m=9223372036854775807;
        bool isPossible = false;

        cin >> w;
        if((w&1) == 0)
        {
            ll r = (ll) ceil(w/2);
            for(ll j = 2; j<=r; j+=2)
            {
                if(w%j == 0 && (((w/j)&1) == 1))
                {
                    if(j<=m)
                    {
                        m = j;
                        n = w/j;
                        isPossible = true;
                        break;
                    }
                }
            }
        }

        cout << "Case " << i << ": ";
        if(isPossible) cout << n << " " << m << endl;
        else cout << "Impossible" << endl;
    }
    return 0;
}
