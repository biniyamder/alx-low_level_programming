#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charactertype;
	int integertype;
	long int longintegertype;
	long long int longlongintegertype;
	float floattype;

	printf("Size of a char: %d byte(s)\n", sizeof(charactertype));
	printf("Size of an int: %d byte(s)\n", sizeof(integertype));
	printf("Size of a long int: %d byte(s)\n", sizeof(longintegertype));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongintegertype));
	printf("Size of a float: %d byte(s)\n", sizeof(floattype));

	return (0);
}
