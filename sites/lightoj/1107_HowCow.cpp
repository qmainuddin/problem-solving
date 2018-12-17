#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    int t;

    cin >> t;

    for(int i=1; i<=t; i++)
    {
        int cord[4][2], m;
        cin >> cord[0][0] >> cord[0][1] >> cord[1][0] >> cord[1][1] >> m;
        int cows[m][2];

        cout << "Case " << i << ":" << endl;
        cord[2][0] = cord[0][0];
        cord[2][1] = cord[1][1];
        cord[3][0] = cord[1][0];
        cord[3][1] = cord[0][1];

        for(int i=0; i<m; i++)
        {
            for(int j=0; j<2; j++)
            {
                cin >> cows[i][j];
            }
            int isYes = false;
            if(cord[0][0]<=cows[i][0] && cord[0][1]<=cows[i][1])
            {
                if(cord[1][0]>=cows[i][0] && cord[1][1]>=cows[i][1])
                {
                    if(cord[2][0]<=cows[i][0] && cord[2][1]>=cows[i][1])
                    {
                        if(cord[3][0]>=cows[i][0] && cord[3][1]<=cows[i][1])
                        {
                            isYes = true;
                        }
                    }
                }
            }

            if(isYes) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}
