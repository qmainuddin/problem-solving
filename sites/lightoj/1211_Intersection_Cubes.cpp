#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    int test, x1,x2,y1,y2,z1,z2,n;
    cin >> test;

    for(int i=1; i<=test; i++)
    {
        cin >> n;
        int x1 = y1 = z1 = 1, x2 = y2 = z2 = 1000;
        for(int j=1; j<=n; j++)
        {
            int temp1, temp2, temp3;
            cin >> temp1 >> temp2 >> temp3;
            if(temp1 > x1) x1=temp1;
            if(temp2 > y1) y1 = temp2;
            if(temp3 > z1) z1 = temp3;

            cin >> temp1 >> temp2 >> temp3;
            if(temp1 < x2) x2=temp1;
            if(temp2 < y2) y2 = temp2;
            if(temp3 < z2) z2 = temp3;
        }
        cout << "Case " << i << ": ";
        if(x1<=x2 && y1<=y2 && z1<=z2)
        {
            cout << abs(x1-x2)*abs(y1-y2)*abs(z1-z2) << endl;
        }
        else cout << "0" << endl;
    }
    return 0;
}
