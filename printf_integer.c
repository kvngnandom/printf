#include "main.h"

/**
 * printf_integer - prints intiger number
 * @args: number arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_integer(va_list args, int printed)
{
	int num = va_arg(args, int), i = 0, j = 0, myArr[10];

	if (num < 0)
	{
		printed += _putchar('-');
		num = -num;
	}

	while (num != 0)
	{
		myArr[i] = num % 10;
		num = num / 10;
		if (num == 0)
			break;
		i++;
	}

	for (j = i; j >= 0; j--)
	{
		printed += _putchar(myArr[j] + '0');
	}
	return (printed);
}
