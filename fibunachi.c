#include <stdio.h>

int main()
{
    int b = 0, a = 1, store, num;
    printf("enetr location of fibunachi:");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        store = b + a;
        b = a;
        a = store;
        printf("the numbar is:%d", store);
    }
}