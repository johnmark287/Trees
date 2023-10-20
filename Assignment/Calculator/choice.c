#include "calculator.h"

int choiceFunction(int choice, int num1,  int num2)
{
	int result, invalid;

	invalid = -1;
    switch (choice)
    {
    case 1:
        result = add(num1, num2);
        break;
    case 2:
        result = sub(num1, num2);
        break;
    case 3:
        result = div(num1, num2);
        break;
    case 4:
        result = mul(num1, num2);
        break;
    case 5:
        result = mod(num1, num2);
        break;
    default:
        result = invalid;
        break;
    }

	return (result);
}
