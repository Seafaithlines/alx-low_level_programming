#include <stdio.h>
/**
 * main - A program that print the size of various types on computer
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsignned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsignned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsignned long)sizeof(c));
	printf("size of a long long int: %lu byte(s)\n", (unsignned long)sizeof(d));
	printf("size of a float: %lu byte(s)\n", (unsignned long)sizeof(f));
	return (0);
}
