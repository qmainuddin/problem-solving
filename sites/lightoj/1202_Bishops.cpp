#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

int main()
{
    int t;

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        ll r1,c1,r2,c2;
        cin >> r1 >> c1 >> r2 >> c2;
        cout << "Case " << i << ": ";

        ll a = r2>=r1? r2-r1 : r1-r2;
        ll b = c2>=c1? c2-c1 : c1-c2;

        if(a == b) cout << "1" << endl;
        else if(a%2 == b%2)
            cout << "2" << endl;
        else
            cout << "impossible" << endl;
    }
    return 0;
}
