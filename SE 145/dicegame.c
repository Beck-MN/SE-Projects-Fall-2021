#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Beck Christensen, Thur Jan 20th, Practice Program

int main() {
	
	char startGame;
	int tries = 0;
	int D4;
	int D6;
	int D10;
	int D12;
	int D20;
	
	srand(time(0));
	
	printf("Would you like to play the dice game?");
	printf("\nY or N: ");
	scanf("%c",&startGame);
	
	while(startGame == 'Y' || startGame == 'y') {
		tries += 1;
		D4 = rand() % 4;
		printf("D4 = %d\n",D4 + 1);
		if (D4 == 3) {
			D6 = rand() % 6;
			printf("D6 = %d\n",D6 + 1);
			if (D6 == 5) {
				D10 = rand() % 10;
				printf("D10 = %d\n",D10 + 1);
				if (D10 == 9) {
					D12 = rand() % 12;
					printf("D12 = %d\n",D12 + 1);
					if (D12 == 11) {
						D20 = rand() % 20;
						printf("D20 = %d\n",D20 + 1);
						if (D20 == 19) {
							startGame = 'N';
						}
					}
					else {
						printf("Oops!, restarting\n");
					}
				}
				else {
					printf("Oops!, restarting\n");
				}
			}
			else {
				printf("Oops!, restarting\n");
			}
		}
		else {
			printf("Oops!, restarting\n");
		}
	}
	
	printf("You Won! It took %d many tries!",tries);
	
	return 0;
}