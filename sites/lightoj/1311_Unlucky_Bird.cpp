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
        double v1,v2,a1,a2,v3,d,s;
        cin >> v1 >> v2 >> v3 >> a1 >> a2;

        d = (((v1*v1)/a1) + ((v2*v2)/a2))/2;
        //s = (v1/a1)*v3;
        //if(s <= d) s = (v2/a2)*v3;
        double time1 = v1/a1;
        double time2 = v2/a2;
        double t;
        if(time1 > time2) t = time1;
        else t = time2;
        s = t * v3;
        printf("Case %d: %lf %lf\n",i,d,s);
    }
    return 0;
}

