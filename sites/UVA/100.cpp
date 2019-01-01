#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int counters[1000000], loCount;

ll getValue(ll n)
{
    loCount++;
    if(n<=1)
    {
        return 1;
    }
    if(n%2 == 0)
    {
        return getValue(n/2);
    }
    else return getValue(3*n +1);
}

int main()
{
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);

    ll a,b;
    memset(counters, 0, sizeof(counters));
    counters[1] = 1;
    counters[2] = 2;
    while(cin >> a >> b)
    {
        int max = 0;
        for(ll i=a; i<=b; i++)
        {
            loCount = 0;
            getValue(i);
            if(loCount > max)
            {
                max = loCount;
            }
        }
        cout << a << " " << b << " " << max << endl;
    }
    return 0;
}

