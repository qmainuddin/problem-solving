#include<bits/stdc++.h>
#define pi acos(-1)

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int test;
    cin >> test;

    for(int i=1; i<=test; i++)
    {
        int r1,r2,h,p;
        cin >> r1 >> r2 >> h >> p;

        double r = r2 + (r1-r2) * ((double) p/h);
        cout << "Case " << i << ": ";
        cout << fixed << setprecision(9) << (double) (pi* p * (r*r + r*r2 + r2*r2))/3 << endl;
    }
    return 0;
}
