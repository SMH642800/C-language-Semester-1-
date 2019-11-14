// Test [Find the answer of x]
// a*x^2+b*x+c=0

#include <stdio.h>
#include <math.h>

int main(void)
{
	int a, b, c;
	int D;
	int x1, x2;

	printf("Please enter 3 numbers : ");
	scanf_s("%d%d%d", &a, &b, &c);

	D = b * b - 4 * a * c;

	if (D >= 0) {
		x1 = ((-b) + sqrt(D)) / (2 * a);
		x2 = ((-b) - sqrt(D)) / (2 * a);
		printf("%d  %d\n", x1, x2);
	}
	else {
		printf("NO Answer !\n");
	}

	return 0;
}
