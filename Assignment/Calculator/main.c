#include "calculator.h"

int main(void)
{
    int num1, num2, choice, result;

    printf("---------Simple Calculator---------\n\n");
    printf("Enter two integers: \n");
    scanf("%d %d", &num1, &num2);

    printf("\n---------Types of Operations-------\n");
    printf("1. Add.\n");
    printf("2. Subtract.\n");
    printf("3. Divide.\n");
    printf("4. Multiply.\n");
    printf("5. Modulus.\n\n");

    printf("Choose the type of operation: ");
    scanf("%d", &choice);
    result = choiceFunction(choice, num1, num2);
    if (result == -1)
        printf("\nInalid choice.\n\n");
    else
        printf("Result: %d\n", result);
    return (0);
}
