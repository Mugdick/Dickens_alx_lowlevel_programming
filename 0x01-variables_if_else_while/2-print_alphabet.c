#include <stdio.h>
#include <unistd.h>
/**
 * main - main function
 * Return: 0 (success)
 */
int main(void)
{
	int y;

	for (y = 'a'; y <= 'z'; y++)
	{

		putchar(y);
	}
	putchar('\n');
return (0);
}
