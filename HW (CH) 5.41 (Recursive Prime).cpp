#include<stdio.h>

int isPrime(int, int);

int main()
{
	int num, i;

	printf("Enter a positive number : ");
	scanf("%d", &num);

    i=num/2;
	int prime = isPrime(num, i);

	if (prime == 1) {
		printf("%d is a prime number\n", num);
	}
	else {
		printf("%d is not a prime number\n", num);
	}

}

int isPrime(int num, int i)
{
	if (i == 1) {
		return 1;
	}
	else {
		if (num % i == 0) {
			return 0;
		}
		else {
			isPrime(num, i - 1);
		}
	}
}
