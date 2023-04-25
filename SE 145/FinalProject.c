//SE 185: Final Project Template//
/////////////////////////
/*
Team 420
Beck Christensen | 100%
*/

////////////////////
#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//
//add more here////

//////////////////////
//Struct Definition//
////////////////////
typedef struct highscore {
		int score;
		char name[4];
} highscore;

/////////////////////////////////////
//User Defined Functions Prototype//
//List prototypes here and define//
//tehm below the main function////
/////////////////////////////////

int generateShapes();
int quiz(char gameOrder[], int turn, int score);
void squareGeneration(int circled);
void heartGeneration(int circled);
void diamondGeneration(int circled);
void rhombusGeneration(int circled);
void heartdiamondGeneration(int circled);
void wait();
void addToHighscore(int score);
int checkHighscore(int score);
void showHighscore();
void sortHighscroe();

int main(){

	char startGame;
	char keepGoing;
	int gameCount = 1;
	int order;
	char gameOrder[99];
	int score = 0;
	


	//introduction to game
	printf("Welcome to the Memory Game!\n");
	printf("To start the game, press \"g\"\n");
	printf("In this game, various shapes will appear with a circle around it\n");
	printf("You must remember the order in which the shapes are circled and reapeat it using\n");
	printf("W for up, S for down, D for right, and A for left\n\n");

	//highscore table
	printf("Highscores:\n");
	showHighscore();

	//start game
	printf("\n\nWhat would you like to do?\n");
	printf("\"g\" for a game\n");
	scanf("%c",&startGame);

	//game loop
	while(startGame == 'g'){

		/*generates the order of shapes the user 
		has to memorize and stores the corresponding letters
		into an array*/ 
		for (int i = 0; i < gameCount; ++i) {
			order = generateShapes();
			wait();
			
			if (order == 0) {
				gameOrder[i] = 'w';
			}
			else if (order == 1) {
				gameOrder[i] = 'a';
			}
			else if (order == 2) {
				gameOrder[i] = 'd';
			}
			else if (order == 3) {
				gameOrder[i] = 's';
			}
		}
		
		score = quiz(gameOrder,gameCount,score);
		
		/*Ask the user after each turn if they would like to keep
		the game going or if they would like to stop*/
		printf("Good Job! Would you like to keep going?\n");
		printf("\"g\" to keep going\n");
		printf("\"e\" to exit game\n");
		scanf(" %c",&keepGoing);
		
		if (keepGoing == 'g') {
			gameCount++;
			continue;
		}
		else if (keepGoing == 'e') {
			printf("\nFinal score: %d\n",score);
			printf("Thank you for playing!\n");
			
			if (checkHighscore(score) == 1) {
				printf("Congrats, you got a highscore!\n");
				addToHighscore(score);
				sortHighscroe();
				showHighscore();
			}
			else if (checkHighscore(score) == 0) {
				printf("Looks like you didnt get a highscore, better luck next time!\n");
			}
			exit(0);
		}	
		
	}
	
	return 0;
}

///////////////////////////////////////
//User Defined Functions' Definition//
/////////////////////////////////////

//square shape generation
void squareGeneration(int circled) {
	
	/*Generates a square made up of "*"'s using loops*/
	
	int rows = 7;
	int i = 0;
	int j = 0;

	//circled square
	if (circled == 1) {
		printf("          ");
		printf(" -------\n");
			for(i = 0; i < rows; i++){
				printf("          ");
					printf("|");
		        for(j = 0; j < rows; j++){
		           printf("*");
		        }
						printf("|");
		        printf("\n");
		    }
				printf("          ");
				printf(" -------\n");
		}

	//normal square
	else if (circled == 2) {
		for(i = 0; i < rows; i++){
			printf("          ");
					for(j = 0; j < rows; j++){
						 printf("*");
					}
					printf("\n");
			}
		}

}

//rhombus shape generation
void rhombusGeneration(int circled) {
	
	/*Generates a rhombus made up of "*"'s using loops*/
	
	int rows = 7;
	int i = 0;
	int j = 0;

	//circled rhombus
	if (circled == 1) {
		printf("          ");
		printf(" --------------\n");
	for (i = 0; i < rows; i++) {
		printf("          ");
		printf("|");
			for (j = 0; j < i; j++) {
					printf(" ");
			}
			for (j = 0; j < rows; j++) {
					printf("*");
			}
			for (j = rows; j > i; j--) {
					printf(" ");
			}
			printf("|");
			printf("\n");
	}
	printf("          ");
	printf(" --------------\n");
	}

	//normal rhombus
	else if (circled == 2) {
		for (i = 0; i < rows; i++) {
			printf("          ");
				for (j = 0; j < i; j++) {
						printf(" ");
				}
				for (j = 0; j < rows; j++) {
						printf("*");
				}
				printf("\n");
		}
		printf("\n");
	}
}

//heart and diamond shape generation on same line
void heartdiamondGeneration(int circled) {

	/*Wasn't able to generate these shapes on the same line 
	using loops so i just decided to manually print them instead*/
	
	//circled heart, normal diamond
	if (circled == 1){
		printf(" --------------               \n");
		printf("|  ***    ***  |       *      \n");
		printf("| *****  ***** |      ***     \n");
		printf("|**************|     *****    \n");
		printf("| ************ |    *******   \n");
		printf("|  **********  |   *********  \n");
		printf("|    ******    |    *******   \n");
		printf("|     ****     |     *****    \n");
		printf("|      **      |      ***     \n");
		printf(" --------------        *      \n");
		
	}
	//normal heart, circled diamond
	else if (circled == 2){
		printf("                ------------- \n");
		printf("  ***    ***   |      *      |\n");
		printf(" *****  *****  |     ***     |\n");
		printf("************** |    *****    |\n");
		printf(" ************  |   *******   |\n");
		printf("  **********   |  *********  |\n");
		printf("    ******     |   *******   |\n");
		printf("     ****      |    *****    |\n");
		printf("      **       |     ***     |\n");
		printf("               |      *      |\n");
		printf("                ------------- \n");

	}
	//normal heart, normal diamond
	else if (circled == 3) {
		printf("  ***    ***          *      \n");
		printf(" *****  *****        ***     \n");
		printf("**************      *****    \n");
		printf(" ************      *******   \n");
		printf("  **********      *********  \n");
		printf("    ******         *******   \n");
		printf("     ****           *****    \n");
		printf("      **             ***     \n");
		printf("                      *      \n");
	}
}

//generates shapes for game
int generateShapes(){
	
	/*generates all shpaes together and depending on what the random 
	number is (1-4), it cirles one of the four shapes*/
	
	srand(time(0));
	int randNum = (rand() % 4);
	int order;

	if (randNum == 0) {
		squareGeneration(1);
		printf("\n\n");
		heartdiamondGeneration(3);
		printf("\n\n");
		rhombusGeneration(2);
		order = 0;
		return order;
	}
	
	else if (randNum == 1) {
		squareGeneration(2);
		printf("\n\n");
		heartdiamondGeneration(1);
		printf("\n\n");
		rhombusGeneration(2);
		order = 1;
		return order;
	}
	
	else if (randNum == 2) {
		squareGeneration(2);
		printf("\n\n");
		heartdiamondGeneration(2);
		printf("\n\n");
		rhombusGeneration(2);
		order = 2;
		return order;
	}
	
	else if (randNum == 3) {
		squareGeneration(2);
		printf("\n\n");
		heartdiamondGeneration(3);
		printf("\n\n");
		rhombusGeneration(1);
		order = 3;
		return order;
	}
	
	printf("\n");
}

//function to have the code wait a certain amount of time (2 secs) between generating shapes
void wait() {
	int time1 = time(0);
	int time2;
	int timeDif;
	
	while(timeDif <= 3) {
		time2 = time(0);
		timeDif = time2 - time1;
	}
	
	int time = 0;
}

//the quiz performed after the order of shapes has been generated
int quiz(char gameOrder[], int turn, int score){
	
	
	char userIn;
	
	printf("Turn: %d\n", turn);
	printf("Score: %d\n", score);
	printf("Okay, what was the order? (Use w,a,s,d)\n");
	
	for (int i = 0; i < turn; ++i) {
		printf("%d time: ", i + 1);
		scanf(" %c",&userIn);
		
		if (userIn == gameOrder[i]) {
			score++;
			printf("Score: %d\n\n",score);
		}
		
		else {
			
			if (checkHighscore(score) == 0) {
				printf("Nope the correct answer was %c\n",gameOrder[i]);
				printf("Final score: %d\n",score);
				printf("Thank you for playing, you did not get a highscore but keep trying!\n");
				exit(0);
			}
			
			else if (checkHighscore(score) == 1) {
				printf("Nope the correct answer was %c\n",gameOrder[i]);
				printf("Final score: %d\n",score);
				printf("Thank you for playing, you got a highscore!\n");
				addToHighscore(score);
				sortHighscroe();
				showHighscore();
				exit(0);
			}
		}
	}
	
	return score;
}

//funtion that adds current user score to the scoreboard
void addToHighscore(int score) {
	
	FILE *fp = fopen("scoreboard.txt","a");
	struct highscore player;
	
	printf("Enter name: ");
	scanf("%s", player.name);
	player.score = score;
	
	fprintf(fp,"%s %d\n", player.name, player.score);
	fclose(fp);
}

//funtion that checks if current user score makes it on to the scoreboard
int checkHighscore(int score){
	
	FILE *fp = fopen("scoreboard.txt","r");
	char tempName[4];
	int tempScore;
	
	for (int i = 0; i < 10 && !feof(fp); i++) {
		fscanf(fp, "%s %d", tempName, &tempScore);
		
		if (score > tempScore) {
			return 1;
		}
		else {
			continue;
		}
	}

	return 0;
}

//function that displays the current scoreboard/highscores
void showHighscore() {
	
	struct highscore player[10];
	
	FILE *fp = fopen("scoreboard.txt","r");
	
	printf("Rank  Name  Score\n");
	
	for (int i = 0; i < 10 && !feof(fp); i++) {
		fscanf(fp,"%s %d", player[i].name, &player[i].score);
		
		if (player[i].score >= 0 && player[i].score <= 99) {
			
			if (i == 9) {
				printf("%d    %s   %d   \n",i +1,player[i].name,player[i].score);
			}
			else {
				printf("%d     %s   %d   \n",i +1,player[i].name,player[i].score);
			}
		}
		else {
			break;
		}
	}
	fclose(fp);
}

//function that sorts the current list of scores, using bubble sort, so they are in proper order
void sortHighscroe() {
	
	struct highscore playerSort[99];
	int count = 0;
	int tempScore;
	char tempName[4];
	
	FILE *fp = fopen("scoreboard.txt","r");
	
	
	for (int i = 0; !feof(fp); i++) {
		fscanf(fp,"%s %d", playerSort[i].name, &playerSort[i].score);
		++count;
	}
	
	if (count >= 3) {
	for (int i = 0; i < count; i++) {
		
		for (int j = 0; j < count - 1; j++) {
		
			if (playerSort[j].score > playerSort[j + 1].score) {
				
				
				tempScore = playerSort[j].score;
				strcpy(tempName,playerSort[j].name);
				
				playerSort[j].score = playerSort[j + 1].score;
				strcpy(playerSort[j].name,playerSort[j + 1].name);
				
				playerSort[j + 1].score = tempScore;
				strcpy(playerSort[j + 1].name, tempName);
				
			}
		}
	}
	
	fclose(fp);
	
	FILE *fp2 = fopen("scoreboard.txt","w");
	
	for (int i = count -1; i > 0; i--) {
		fprintf(fp2,"%s %d\n", playerSort[i].name, playerSort[i].score);
	}
	
	fclose(fp2);
	
	}
	
}
	
