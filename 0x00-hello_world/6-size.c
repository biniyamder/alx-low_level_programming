#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main (void)
{
	char charactertype;
	int integertype;
	long int longintegertype;
	long long int longlongintegertype;
	float floattype;

	printf("size of char: %d bytes\n", sizeof(charactertype));
        printf("size of int: %d bytes\n", sizeof(integertype));
	printf("size of long int: %d bytes\n", sizeof(longintegertype));
	printf("size of long long int: %d bytes\n", sizeof(longlongintegertype));
	printf("size of float: %d bytes\n", sizeof(floattype));

	return (0);
}
