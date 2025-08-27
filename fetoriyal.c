#include <stdio.h>

int main()
{
    int fectoriyal, store = 1;
    printf("enter num");
    scanf("%d", &fectoriyal);

    for (int i = 1; i <= fectoriyal; i++)
    {
        store*=i;
        /* code */
    }

    printf("the %d! is: %d", fectoriyal, store);
}