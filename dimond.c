#include <stdio.h>
int main()
{
    int num;
    printf("enetr number:");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int o = 1; o <= num - i; o++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
    for (int i = num-1; i >= 0; i--)
    {
        for (int o = 1; o <= num - i; o++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
}