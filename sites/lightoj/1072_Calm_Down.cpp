#include<bits/stdc++.h>
#define pi acos(-1)

using namespace std;

typedef long long int ll;

int main()
{
    int t;

    cin >> t;

    for(int i=1; i<=t; i++)
    {
        double R, r, sinx;
        int n;
        cin >> R >> n;
        cout << "Case " << i << ": ";

        sinx = sin((double) pi/n);

        r = (R*sinx) / (1+sinx);

        if(ceil(r) == r)
        {
            cout << fixed << setprecision(0) << r << endl;
        }
        else
        {
            cout << fixed << setprecision(6) << r << endl;
        }
    }
    return 0;
}
