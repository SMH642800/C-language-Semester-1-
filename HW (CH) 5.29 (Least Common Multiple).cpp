#include <stdio.h>

int gcd(int, int);

int main(void)
{
	int x, y;

	printf("Enter two numbers (num1 num2) :");
	scanf("%d %d", &x, &y);

	int gcdnum=0;
	int lcm=0;

	gcdnum = gcd(x, y);
	lcm = gcdnum * (x / gcdnum) * (y / gcdnum);
	printf("LCM: %d\n", lcm);

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
