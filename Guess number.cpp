// Guess number.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <stdio.h>
#include<time.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
loop:
	int answer=0;
	int guess=0;
	int lastguess=0;
	int upnumber = 100, downnumber = 1;
	char c;
	srand((unsigned)time(NULL));

	answer = (rand() % 100) + 1;
	printf("Welcome to GUESS NUMBER\n\n");
	printf("Please enter your guess number (%d~%d) : ", downnumber, upnumber);
	scanf_s("%d", &guess);

	while (guess > 100 || guess < 1) {
		printf("Oops! Your guess number is not correct!\nPlease try again ! \n\n");
		printf("Please enter your guess number (%d~%d) : ", downnumber, upnumber);
		scanf_s("%d", &guess);
	}

	lastguess = guess;

	while (guess != answer) {
		if (guess > answer) {
			printf("\nYour guess number is too large!\n");
			lastguess = guess;
			if (guess >= lastguess) {
				upnumber = lastguess - 1;
			}
			else {
				lastguess = guess;
				upnumber = lastguess - 1;
			}
		}
		if (guess <= answer) {
			printf("\nYour guess number is too small!\n");
			lastguess = guess;
			if (guess < lastguess) {
				downnumber = lastguess + 1;
			}
			else {
				lastguess = guess;
				downnumber = lastguess + 1;
			}
		}

		printf("\nPlease enter your guess number (%d~%d) : ", downnumber, upnumber);
		scanf_s("%d", &guess);

		while (guess > upnumber || guess < downnumber) {
			if (guess > upnumber || guess < downnumber) {
				printf("\nOops! Your guess number is not correct!\nPlease try again ! \n\n");
				printf("Please enter your guess number (%d~%d) : ", downnumber, upnumber);
				scanf_s("%d", &guess);
			}
		}
	}

	printf("\nCongratulation! You guess the number!\n\n");
	printf("Do you want to play again? (Enter Y or N) : ");
	getchar();

	if ((c = getchar()) == 'Y' || (c = getchar()) == 'y') {
		printf("\n");
		goto loop;
	}
	else {
		printf("\nThank you for playing!\n");
		printf("Have a nice day!\n");
	}

	return 0;
}