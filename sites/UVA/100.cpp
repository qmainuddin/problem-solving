#include<bits/stdc++.h>

using namespace std;

int counters[1000000], loCount;

int getValue(int n)
{
    if(counters[n] != 0)
    {
        cout << "Value: "  << counters[n] << endl;
        return counters[n];
    }
    if(n<=1)
    {
        counters[1] = 1;
        return 1;
    }
    if((n&1) == 0) counters[n] = getValue(n>>2)+1;
    else counters[n] = getValue(3*n +1) + 1;
    cout << "n: " << n << " counters[" << n<< "] : " << counters[n] << endl;
    return counters[n];
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);

    int a,b;
    memset(counters, 0, sizeof(counters));
    counters[1] = 1;
    cout << counters[2] << endl << endl;
    while(cin >> a >> b)
    {
        int max = 0;
        for(int i=a; i<=b; i++)
        {
            int countVal = getValue(i);
            if(countVal > max)
            {
                max = countVal;
            }
        }
        cout << a << " " << b << " " << max << endl;
    }
    return 0;
}

