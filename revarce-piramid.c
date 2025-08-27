#include <stdio.h>
int main()
{
    int num;
    printf("enetr number:");
    scanf("%d", &num);
    for (int i = num; i >= 0; i--)
    {                         
         for (int o = 1; o <=num-i; o++)
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