#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;

    cin >> t;

    for(int i=1; i<=t; i++)
    {
        cin >> n;
        int d[n];

        for(int j=0; j<n; j++)
        {
            cin >> d[j] ;
        }
        int total = 0;
        for(int j=0; j<n; j++)
        {
            if(d[j] > 0) total += d[j];
        }
        cout << "Case " << i << ": " << total << endl;
    }
    return 0;
}
