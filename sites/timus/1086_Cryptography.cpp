#include<bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 200000;
bool primes[MAX_SIZE];
vector<long> V;

void initialize_prime()
{
    memset(primes, true, sizeof(primes));

    for(int i=3; i*i<=MAX_SIZE; i+=2)
    {
        if(primes[i>>1])
        {
            for(int j= i*i; j<=MAX_SIZE; j += i+i)
            {
                primes[j>>1] = false;
            }
        }
    }
    V.push_back(2);
    for(long i=3;i<=MAX_SIZE;i+=2)
        if(primes[i>>1])
            V.push_back(i);
}

int main()
{
    initialize_prime();
    int k;
    cin >> k;
    while(k--)
    {
        int number;
        cin >> number;

        cout << V[number-1] << endl;
    }
    return 0;
}
