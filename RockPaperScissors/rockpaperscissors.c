#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int main()
{
	int p_choice, c_choice;
	srand(time(NULL));
	int flag = 1;

	printf("Welcome to Rock, Paper, Scissors!\n");

	while (flag)
	{

		printf("0 = Rock, 1 = Paper, 2 = Scissors, 3 = EXIT\n");
		printf("Enter your choice: ");
		scanf("%d", &p_choice);

		if (p_choice < 0 || p_choice > 3)
		{
			printf("Invalid choice! Please enter 0, 1, 2, or 3.\n");
			return 1;
		}

		c_choice = rand() % 3;

		printf("You chose: ");
		switch (p_choice)
		{
		case 0:
			printf("Rock\n");
			break;
		case 1:
			printf("Paper\n");
			break;
		case 2:
			printf("Scissors\n");
			break;
		case 3:
			printf("to exit\n");
			break;
		}

		if (p_choice == 3)
		{
			flag = 0;
			break;
			return 1;
		}

		printf("Computer chose: ");
		switch (c_choice)
		{
		case 0:
			printf("Rock\n");
			break;
		case 1:
			printf("Paper\n");
			break;
		case 2:
			printf("Scissors\n");
			break;
		}
		det_winner(p_choice, c_choice);
	}
	return 0;
}
