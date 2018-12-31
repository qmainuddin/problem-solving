#include<bits/stdc++.h>

using namespace std;


int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int test;
    cin >> test;

    for(int i=1; i<=test; i++)
    {
        double o1, o2, a1, a2, b1, b2;
        cin >> o1 >> o2 >> a1 >> a2 >> b1 >> b2;

        double AB = sqrt(((b1-a1) * (b1-a1)) + ((b2-a2) * (b2-a2)));
        double OA = sqrt(((o1-a1) * (o1-a1)) + ((o2-a2) * (o2-a2)));

        double O = acos(1 - ((AB*AB)/ (2*OA*OA)));

        double arc = O * OA;

        printf("Case %d: %lf\n",i,arc);
    }
    return 0;
}
