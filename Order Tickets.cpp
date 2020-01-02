#include <stdio.h>
#define SIZE 4

int main(void)
{
	int i, exit, total_price = 0;
	int ticket_type, ticket_num;
	int ticket_total[SIZE] = { 0 };
	int ticket_price[SIZE] = { 250, 150, 100, 200 };
	char ticket_name[SIZE][20] = { "Normal Tickets", "Respect Tickets", "Child Tickets", "VIP Tickets" };

	printf("This is a Movies Ordering Program. \n");

	do
	{
		printf("Please choice the ticket that you want to buy.\n");
		for (i = 0; i < 4; i++) {
			printf("%d. %s $%d\n", i + 1, ticket_name[i], ticket_price[i]);
		}

		printf("What kind tickets that you want to buy? (1~4)\n");
		scanf_s("%d", &ticket_type);
		printf("How many tickets that you want to buy?\n");
		scanf_s("%d", &ticket_num);

		ticket_total[ticket_type - 1] += ticket_num;

		for (i = 0; i < 4; i++) {
			printf("%s x %d\n", ticket_name[i], ticket_total[i]);
		}

		printf("Continue press 1 and Exit press 0\n");
		scanf_s("%d", &exit);

	} while (exit != 0);

	for (i = 0; i < 4; i++) {
		total_price += ticket_price[i] * ticket_total[i];
	}
	printf("Total_price is %d.\n", total_price);

	return 0;
}