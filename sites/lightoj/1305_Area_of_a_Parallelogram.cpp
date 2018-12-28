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
        ll p = (Ay*Cx) - (By*Cx) + (Bx*Cy) - (Ax*Cy);
        ll q = Ay-2*By+Cy;
        ll l = By*(Ax+Cx)*(Ay-By);
        ll o = Bx * (Ay+Cy) * (Ay-By);
        ll m = ((Bx-Ax) * (Ay-2*By+Cy)) - ((Ay-By) *(2*By-Ax-Cx));
        Dy = ((p*q) + l -o)/m;
        Dx = (Bx*(Ay+Cy)-By*(Ax+Cx)-Dy*(2*Bx-Ax-Cx))/q;

        ll base = sqrt(((Bx-Ax) * (Bx-Ax)) + ((By-Ay) * (By-Ay)));
        ll theta = ((Ay-Dy) * (Bx-Ax)) - ((Ay-By) * (Dx-Ax));
        theta = atan2(theta, ((Ay-By) * (Ay-Dy)) - ((Bx-Ax)*(Dx-Ax)));
        cout << "Theta : " << theta << endl;
        ll height = sqrt(((Dx-Ax) * (Dx-Ax)) + ((Dy-Ay) * (Dy-Ay))) * abs(sin(theta));

        ll area = height * base;
        cout << Dx << " " << Dy << " " << area << endl;
    }
    return 0;
}
