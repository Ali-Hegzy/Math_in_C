#include "../include/equations.h"
#include <stdio.h>
#include <math.h>

#define EPSILON 0.0001

void solve2LinEqu(double x1_1, double x2_1, double co_1, double x1_2, double x2_2, double co_2)
{
    // Edge cases
    double det = x1_1 * x2_2 - x2_1 * x1_2;
    if (fabs(det) < EPSILON)
    {
        printf("No Unique Solution\n");
        return;
    }

    if (x1_2 == 0)
    {
        double x2 = co_2 / x2_2;
        double x1 = (co_1 - (x2_1 * x2)) / x1_1;
        printf("X1: %f\n", x1);
        printf("X2: %f\n", x2);
        return;
    }

    if (x1_1 == 0)
    {
        double x2 = co_1 / x2_1;
        double x1 = (co_2 - (x2_2 * x2)) / x1_2;
        printf("X1: %f\n", x1);
        printf("X2: %f\n", x2);
        return;
    }

    // Edit the second equ
    double editor = x1_1 / x1_2;
    x1_2 *= editor;
    x2_2 *= editor;
    co_2 *= editor;

    // Subtract the two equations
    double tx1 = x1_1 - x1_2;
    double tx2 = x2_1 - x2_2;
    double tco = co_1 - co_2;

    // Find the final values
    tx2 = tco / tx2;
    tx1 = (co_1 - (x2_1 * tx2)) / x1_1;

    printf("X1: %f\n", tx1);
    printf("X2: %f\n", tx2);
}