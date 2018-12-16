#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, m,n;

    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> m >> n;
        int result;
        if(m == 1 || n == 1) result = m*n;
        else if(m ==2 || n == 2)
        {
            if(m == 2 && n == 2) result = m*n;
            else
            {
                if(n == 2) m = m ^ n, n = m ^ n, m = m ^ n;
                if((n % 6)==0 && (n/6)&1) result = n+2;
                else
                {
                    result = ceil((double) n/2) * m;
                }
            }
        }
        else result = ceil((double)(m*n)/2);

        cout << "Case " << i << ": " << result << endl;
    }
    return 0;
}
