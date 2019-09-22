#include <iostream>

long long getQforN(long long N)
{
    if (N == 0)
        return 10;
    else if (N == 1)
        return 1;

    long long Q = 0;
    long long p = 1;

    for(long long div = 9; div > 1; --div)
    {
        while( (N%div) == 0)
        {
            Q += p * div;
            p = p * 10;
            N /= div;
        }
    }

    return (N == 1) ? Q : -1;
}

int main(int argc, char **argv)
{
    long long N;
    std::cin >> N;
    std::cout << getQforN(N) << std::endl;
    return 0;
}
