#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned int n, k, result;
    string s;
    while(cin >> n >> s)
    {
        k = (int) s.length();
        int mod = n%k;
        int index = mod;
        if(mod == 0)
        {
            index = k;
        }
        result = 1;
        int lastValue = n;

        for(int i = 0; lastValue>=index; i++)
        {
            lastValue = n - (i*k);
            if(lastValue <= 0)
            {
                break;
            }
            result *= lastValue;
        }
        cout << result << endl;
    }
}
