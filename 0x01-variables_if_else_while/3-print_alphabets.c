#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point prints alphabet in lowercase then uppercase
 *    * Return: Always 0 (success)
 */
int main(void)
{
	int y;

	for (y = 'a'; y <= 'z'; y++)
	{
		putchar(y);
	}
	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
