#include <stdio.h>
#include <math.h>
#include <time.h>

#define E 2.718281828459045

// Summtion
// long double calc_e(long long n)
// {
//     n *= n;
//     long double x = 1.0L;

//     for (long long i = 0; i < n; i++)
//         x += x / n;

//     return x;
// }

// using 1/n!
long double calc_e(long long n)
{
    long double down = 1;
    long double x = 0L;

    for (long long i = 0; i < n; i++)
    {
        if (i != 0)
            down *= i;

        x += (1.0 / down);
    }

    return x;
}

int main()
{

    return 0;
}