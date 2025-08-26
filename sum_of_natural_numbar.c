#include <stdio.h>

int main()
{

    int num, store = 0;
    printf("enetr num:");
    scanf("%d", &num);
    for (int i = 1; i < num; i++)
    {
        store += i;
        /* code */
    }
    printf("the sum is:%d", store);
}