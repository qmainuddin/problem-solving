#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    ll s, n;

    while(cin >> s)
    {
        n = ceil(sqrt((double) s));
        cout << n << endl;
    }
    return 0;
}