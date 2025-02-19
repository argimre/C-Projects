#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int main(){
	int p_choice, c_choice;
	srand(time(NULL));

	printf("Welcome to Rock, Paper, Scissors!\n");
    	printf("Enter your choice:\n");
    	printf("0 = Rock, 1 = Paper, 2 = Scissors\n");
    	scanf("%d", &p_choice);

	if (p_choice < 0 || p_choice > 2) {
        	printf("Invalid choice! Please enter 0, 1, or 2.\n");
        	return 1;
    	}

	    c_choice = rand() % 3;

    	printf("You chose: ");
    	switch (p_choice) {
        	case 0: printf("Rock\n"); break;
        	case 1: printf("Paper\n"); break;
        	case 2: printf("Scissors\n"); break;
    	}

    	printf("Computer chose: ");
    	switch (c_choice) {
        	case 0: printf("Rock\n"); break;
        	case 1: printf("Paper\n"); break;
        	case 2: printf("Scissors\n"); break;
    	}

	det_winner(p_choice, c_choice);
	return 0;
}
