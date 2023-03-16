#include <stdio.h>

/*
 * main : write c program to print size of types on the computer
 *
 * Description : print the size of varios data types in computer
 *
 * Return : return 0 means there is no errors in program
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
        /* value 0 means there is no errors */
	return (0);
}
