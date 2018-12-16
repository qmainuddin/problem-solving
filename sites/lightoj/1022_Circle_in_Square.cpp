#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    cin >> t;

    for(int i=1; i<=t; i++)
    {
        double r, area;
        cin >> r;

        area = 2 * r * r* (2-acos(0));
        cout << "Case " << i << ": " << fixed << setprecision(2) << area << endl;
    }
    return 0;
}
