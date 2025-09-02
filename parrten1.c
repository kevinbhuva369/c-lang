#include <stdio.h>

int main()
{
    int num;
    printf("enter num ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int k = 0; k < i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for (int y = num - 1; y > 0; y--)
    {
        for (int l = 0; l < y; l++)
        {
            printf(" *");
        }

        printf("\n");
    }
}