#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate_random_walk(char area[10][10]);

void print_array(char area[10][10]);

int main() 
{
	char area[10][10];
	generate_random_walk(area);
	print_array(area);
	return 0;
}

void generate_random_walk(char area[10][10])
{
    for (int i = 0; i < 10; i++)
		for (int k = 0; k < 10; k++)
			area[i][k] = '.';
	area[0][0] = 'A';

	srand((unsigned)time(NULL));
	int random;
	int value = 65;
	int row = 0, column = 0;
	while (1) {
		random = rand() % 4;
		if (random == 0) {

			if (row - 1 < 0 || area[row - 1][column] != '.')
				continue;
			else {
				row--;
				value++;
				area[row][column] = value;
			}
		}
		if (random == 1) {

			if (row + 1 > 9 || area[row + 1][column] != '.')
				continue;
			else {
				row++;
				value++;
				area[row][column] = value;
			}
		}
		if (random == 2) {

			if (column - 1 < 0 || area[row][column - 1] != '.')
				continue;
			else {
				column--;
				value++;
				area[row][column] = value;
			}
		}
		if (random == 3) {

			if (column + 1 > 9 || area[row][column + 1] != '.')
				continue;
			else {
				column++;
				value++;
				area[row][column] = value;
			}
		}
        
		if (value == 90) {
			printf("_______________You win!________________\n");
			break;
		}

		if ((!area[row + 1][column]) || (area[row + 1][column] != '.'))
			if ((!area[row - 1][column]) || (area[row - 1][column] != '.'))
				if ((!area[row][column + 1]) || (area[row][column + 1] != '.'))
					if ((!area[row][column - 1]) || (area[row][column - 1] != '.')) {
						printf("______________You lost______________\n");
						break;
					}
	}
}
void print_array(char area[10][10])
{
    for (int i = 0; i < 10; i++) {
		for (int k = 0; k < 10; k++)
			printf("%c ", area[i][k]);
		printf("\n");
	}
}