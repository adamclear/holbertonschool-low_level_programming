#include <stdio.h>
/**
 * main- prints 1-100, Fizz & Buzz
 * Return: int
 */
int main(void)
{
	int i = 1;

while (i <= 100)
{
	if (i % 3 == 0 && i % 5 == 0)
	{
		printf("FizzBuzz ");
	}
	else if (i % 3 == 0 && i % 5 != 0)
	{
		printf("Fizz ");
	}
	else if (i % 3 != 0 && i % 5 == 0)
	{
		printf("Buzz");
		if (i < 100)
		{
			printf(" ");
		}
	}
	else
	{
		printf("%d ", i);
	}
	i++;
}
printf("\n");
return (0);
}
