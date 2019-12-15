#include <stdio.h>

int main(void)
{
	int i, j;
	int sum;

	for (i = 1; i <= 1000; i++) {
		sum = 0;
		for (j = 1; j < i; j++) {
			if (i % j == 0) {
				sum += j;
			}
		}
		if (sum == i) {
			printf("%d is an perfect number, and the factors of %d is ", i, i);
			printf("( ");
			for (j = 1; j < i; j++) {
				if (i % j == 0) {
					printf("%d, ", j);
				}
			}
			printf(") \n");
		}
	}

	return 0;
}
