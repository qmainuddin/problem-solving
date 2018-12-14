#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, com1, com2;
        cin >> n;
        if(n > 10)
        {
            com1 = n-10;
            com2 = 10;
        }
        else
        {
            com1 = 0;
            com2 = n;
        }
        cout << com1 << " " << com2 << endl;
    }
    return 0;
}