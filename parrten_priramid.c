#include <stdio.h>

int main()
{
    int num;
    printf("enetr num:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int o = 1; o <= num - i; o++)
        {
            printf(" ");
            /* code */
        }
        for (int l = 0; l < i; l++)
        {
            printf("* ");
            /* code */
        }
        printf("\n");
        /* code */
    }

    return 0;
}