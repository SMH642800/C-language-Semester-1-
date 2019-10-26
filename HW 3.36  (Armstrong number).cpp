//HW 3.36 (Armstrong number)

#include <stdio.h>

int main(void)
{
	int i, a[3], number, sum, insist;
	printf("Armstrong number in the range from 100 to 999 : \n");
	number = 100;
	sum = 0;
	while (number <= 999) {
		insist = number;
		for (i = 2; i >= 0; i--) {
			a[i] = insist % 10;
			insist = insist / 10;
		}
		for (i = 0; i < 3; i++) {
			sum += (a[i] * a[i] * a[i]);
		}
		if (sum == number) {
			printf("%d\n", number);
		}
		sum = 0;
		number++;
	}

	return 0;
}
