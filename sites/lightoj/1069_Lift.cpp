#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int t;

    cin >> t;

    for(int i=1; i<=t; i++)
    {
        ll me, lift;
        cin >> me >> lift;
        cout << "Case " << i << ": ";

        int t = ((abs(me-lift) + me) * 4) + 19;

        cout << t << endl;
    }
    return 0;
}
