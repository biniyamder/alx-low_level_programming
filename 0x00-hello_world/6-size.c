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

	printf("size of char: %d byte(s)\n", sizeof(charactertype));
        printf("size of int: %d byte(s)\n", sizeof(integertype));
	printf("size of long int: %d byte(s)\n", sizeof(longintegertype));
	printf("size of long long int: %d byte(s)\n", sizeof(longlongintegertype));
	printf("size of float: %d byte(s)\n", sizeof(floattype));

	return (0);
}
