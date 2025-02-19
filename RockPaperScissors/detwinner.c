#include <stdio.h>
#include "game.h"

void det_winner(int p_choice, int c_choice) {
	if (p_choice == c_choice) {
		printf("It's a tie!\n");
    	} else if ((p_choice == 0 && c_choice == 2) ||  // Rock beats Scissors
               	(p_choice == 1 && c_choice == 0) ||  // Paper beats Rock
		(p_choice == 2 && c_choice == 1)) { // Scissors beats Paper
        	printf("You win!\n");
    	} else {
        	printf("Computer wins!\n");
    	}
}
