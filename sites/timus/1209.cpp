#include<bits/stdc++.h>

using namespace std;

int get_digit(long long digit_position)
{
    /*if(digit_position == 0) return 1;
    for(long long i=1; ; i++)
    {
        long long digit_count = (i*(i+1))/2;
        if(digit_count == digit_position) return 1;
        else if(digit_count > digit_position) return 0;
    }*/

    double sqr = 8*(digit_position) -7;
    double sqrt_val = sqrt(sqr);
    int val = (int)sqrt_val;
    if(val * val == (int) sqr)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n;
    cin >> n;
    long long k[n];
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
