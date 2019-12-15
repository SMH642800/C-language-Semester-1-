#include <stdio.h>

int gcd(int, int);

int main(void)
{
	int x, y;

	printf("Enter two numbers (num1 num2) :");
	scanf("%d %d", &x, &y);

	printf("GCD: %d\n", gcd(x, y));

	return 0;
}

int gcd(int x, int y)
{
	if (y == 0) {
		return x;
	}
	else {
		return gcd(y, x % y);
	}
}
