//[Guess Number]

#include <stdio.h>

int main(void)
{
	int answer = 37;
	int guess;

	printf("Please enter your guess number : ");
	scanf_s("%d", &guess);

	while (guess != answer) {
		if (guess > answer) { printf("Too large!\n"); }
		if (guess < answer) { printf("Too small!\n"); }

		printf("Please enter your guess number : ");
		scanf_s("%d", &guess);
	}
	printf("Correct!\n");

	return 0;
}
