#include<bits/stdc++.h>
#define PI acos(-1)

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
        ll Ax,Ay, Bx, By, Cx, Cy, Dx, Dy;
        cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
        cout << "Case " << i << ": ";
        Dx = Ax + (Cx-Bx);
        Dy = Ay + (Cy-By);
        ll area = abs((Ax*By) + (Bx*Dy) + (Dx*Ay) - ((Ax*Dy) + (Dx*By) + (Bx*Ay)));
        cout << Dx << " " << Dy << " " << area << endl;
    }
    return 0;
}
