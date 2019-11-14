// Medium Test [Math constant PI value in C]

#include<stdio.h>

int main(void) {
	
	int n,i;
	float pi=0.0;
	
	printf("Please enter a numbers : ");
	scanf_s("%d", &n);

	for (i = 1; i <= n; i++) {
		if ((i % 2) == 0) {
			pi = pi - (4.0 / (i * 2 - 1));
		}
		else {
			pi = pi + (4.0 / (i * 2 - 1));
		}
	}

	printf("%f", pi);

	return 0;
}
