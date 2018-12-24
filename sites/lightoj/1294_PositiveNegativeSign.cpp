#include<bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int test;
    cin >> test;

    for(int i=1; i<=test; i++)
    {
        ll n,m;
        cin >> n >> m;
        cout << "Case " << i << ": ";
        if(m==n || n%(2*m) != 0) cout << 0 << endl;
        else 
        {
            ll res = ((n*m)/2);
            cout << res << endl;
        }
    }
    return 0;
}
