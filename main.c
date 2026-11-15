#include <stdio.h>
#include "include/MConst.h"
#include "include/equations.h"

int main()
{
    solve2LinEqu(1,1,5, 2,4,6);
    printf("====\n");
    solve2LinEqu(1,1,5, 0,2,6);
    printf("====\n");
    solve2LinEqu(0,1,3, 1,1,5);
    printf("====\n");
    solve2LinEqu(0,1,3, 2,1,7);
    printf("====\n");
    solve2LinEqu(2,4,6, 1,2,3);

    return 0;
}