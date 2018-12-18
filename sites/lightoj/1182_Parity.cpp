#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

int main()
{
    int t;

    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        ll n;

        cin >> n;
        int countOnes = 0;
        for(int i=1; n > 0; i++)
        {
            if(n&1) countOnes++;
            n=n>>1;
        }
        cout << "Case " << i << ": ";
        if(countOnes&1) cout << "odd" << endl;
        else cout << "even" << endl;
    }
    return 0;
}
