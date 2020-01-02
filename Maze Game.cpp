#include <stdio.h>

void DrawMap(int map[10][10]);
void InputCommand(int map[10][10]);

int playerX = 9, playerY = 1;

int main(void)
{
	int i = 0, j = 0, command = 0;
	int map[10][10] = { {0,1,0,0,0,0,0,0,0,0},
						{0,1,1,1,1,1,0,0,0,0},
						{0,0,0,0,0,1,1,1,1,0},
						{0,1,1,1,0,0,0,0,1,0},
						{0,1,0,1,1,1,1,0,1,0},
						{0,1,0,1,0,0,1,0,1,0},
						{0,0,0,1,0,1,1,1,1,0},
						{0,1,1,1,0,1,0,1,0,0},
						{0,1,0,0,1,1,0,1,1,0},
						{0,1,0,0,0,0,0,0,0,0} };
	do {

		DrawMap(map);
		InputCommand(map);
		if (playerX == 0 && playerY == 1) {
			break;
		}

	} while (1);

	printf("\nYou go out the maze.\n");

	return 0;
}

void DrawMap(int map[10][10])
{
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (playerX == i && playerY == j) {
				printf("¡¹");
			}
			else if (map[i][j] == 1) {
				printf("¡@");
			}
			else {
				printf("¡½");
			}
		}
		printf("\n");
	}
}

void InputCommand(int map[10][10])
{
	int command;
	printf("Please enter the command. (1:¤W,2:¤U,3:¥ª,4:¥k)\n");
	scanf_s("%d", &command);
	if (command == 1) {
		if (playerX > 0 && map[playerX - 1][playerY] == 1) {
			playerX -= 1;
		}
		else {
			printf("You can't through the wall.\n");
		}
	}
	if (command == 2) {
		if (playerX > 0 && map[playerX + 1][playerY] == 1) {
			playerX += 1;
		}
		else {
			printf("You can't through the wall.\n");
		}
	}
	if (command == 3) {
		if (playerY > 0 && map[playerX][playerY - 1] == 1) {
			playerY -= 1;
		}
		else {
			printf("You can't through the wall.\n");
		}
	}
	if (command == 4) {
		if (playerY > 0 && map[playerX][playerY + 1] == 1) {
			playerY += 1;
		}
		else {
			printf("You can't through the wall.\n");
		}
	}
}