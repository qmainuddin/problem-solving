#include<bits/stdc++.h>

using namespace std;

int get_digit(unsigned long long digit_position)
{
    double result = (sqrt((8*digit_position)-7));
    if(result == (unsigned long long)result) return 1;
    return 0;
}

int main()
{
    int n;
    cin >> n;
    unsigned long long k[n];
    for(int i =0; i<n; i++)
    {
        cin >> k[i];
    }
    for(int i=0; i<n; i++)
    {
        cout << get_digit(k[i]) << " ";
    }
    return 0;
}
