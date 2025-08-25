#include <stdio.h>

//   this program  tarnerry opretar example
int main()
{
    int kevin;
    while (1)
    {
        printf("enter num");
        scanf("%d", &kevin);
        /* code */
        int kw = kevin % 2 == 0 ? printf("evan num\n") : printf("odd num\n");
    }
    return 0;
}