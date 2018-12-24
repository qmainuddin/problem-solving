#include<bits/stdc++.h>

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
        int n,m;
        cin >> n >> m;
        cout << "Case " << i << ": ";

        cout << (ll)((n*m)/2) << endl;
    }
    return 0;
}
