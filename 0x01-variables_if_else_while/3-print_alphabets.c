#include <stdio.h>

#include <ctype.h>


/**
 * *main - Program to print alphabet letters in all cases followed by new line
 *
 * *
 *
 * *Return: return 0
 *
 */

int main(void)

{

	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{

		putchar (letter);
	}
	for (letter = 'A' ; letter <= 'Z'; letter++)
	{
		putchar (letter);
	}
	putchar ('\n');
	return (0);

}
