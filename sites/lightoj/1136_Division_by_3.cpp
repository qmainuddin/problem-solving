#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long int ll;

int main()
{
    int t;

    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    cin >> t;

    for(int i=1; i<=t; i++)
    {
        ll a,b, blck, result;

        cin >> a >> b;

        ll totalCount = (b-a+1);
        blck = totalCount/3;
        result = blck*2;

        if(totalCount%3 != 0)
        {
            int lp = totalCount%3;
            for(ll i=1; i<=lp; i++)
            {
                if(b%3==0 || b%3 == 2) result++;
                b--;
            }
        }

        cout << "Case " << i << ": " << result << endl;
    }
    return 0;
}
