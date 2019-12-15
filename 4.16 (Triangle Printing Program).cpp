#include <stdio.h>

int main(void)
{
	int i,j;

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 10-i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= i-1; j++) {
			printf(" ");
		}
		for (j = 1; j <= 10 - i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9-i; j++) {
			printf(" ");
		}
		for (j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");

	return 0;
}
