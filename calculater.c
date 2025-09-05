#include <stdio.h>

int main()
{
    char op;
    int num1, num2;

    printf("The program works with operators: -, +, *, /\n");

    printf("Enter number1: ");
    scanf("%d", &num1);

    printf("Enter number2: ");
    scanf("%d", &num2);

    printf("Enter opretar: ");
    scanf(" %c", &op); // Notice space before %c

    printf("\nThinking...\n");

    switch (op)
    {
    case '-':
        printf("The value is: %d\n", num1 - num2);
        break;
    case '+':
        printf("The value is: %d\n", num1 + num2);
        break;
    case '*':
        printf("The value is: %d\n", num1 * num2);
        break;

    case '/':
        if (num1 == 0 || num2 == 0)
        {
            printf("Error: Division by zero is not allowed!\n");
            break;
        }
        else
        {
            printf("The value is: %d\n", num1 / num2);
        }
        break;
    default:
        printf("Invalid operator!\n");
    }

    return 0;
}
