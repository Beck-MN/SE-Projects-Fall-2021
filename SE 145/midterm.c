/*----------------------------------------------------------------------------
-		         SE 185: Midterm Project   	               -
- List the names of all team members, their roles, and their participation
1- Charles Beck Christensen, designer, writer, and debugger, 100%														                                     -
-----------------------------------------------------------------------------*/

/*----------------------------------------------------------------------------
-								Includes									                                   -
-----------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*----------------------------------------------------------------------------
-	                            Functions Prototypes                                   -
-----------------------------------------------------------------------------*/
double quiz1();
double quiz2();
double quiz3();
/*----------------------------------------------------------------------------
-	                                Notes                                    -
-----------------------------------------------------------------------------*/

// Compile with gcc midtermProject.c -o proj

/*----------------------------------------------------------------------------
-								Implementation								                               -
-----------------------------------------------------------------------------*/
int main()
{
	double score;
	double average = 0;
	int numAttempts = 0;
	char userInput;
	int seed,randNum;
	
	printf("Hello and welcome! Today you will be taking one of three quizzes:\n");
	printf("-Quiz 1: Chemistry\n-Quiz 2: Math\n-Quiz 3: History\n");
	
	printf("Would you like to participate? type y or n: ");
	scanf("%c", &userInput);
	
	while (userInput == 'y') {
		
		printf("Please choose a number between 1 and 9: ");
		scanf("%d", &seed);
		
		srand(seed);
		
		randNum =(rand() % 4);
		
		if (randNum == 1) {
			score = quiz1();
			average += score;
			numAttempts++;
		}
		else if (randNum == 2) {
			score = quiz2();
			average += score;
			numAttempts++;
		}
		else if (randNum == 3) {
			score = quiz3();
			average += score;
			numAttempts++;
		}
		
		average = average / numAttempts;
		printf("Your score is %.1lf%% and your current score average is %.1lf%% ", score * 100, average * 100);
	
		printf("Do you wish to take another quiz? type y or n: ");
		scanf(" %c", &userInput);
	}
		
	if (userInput == 'n') {
		printf("Goodbye!");
	}
	

    return 0;
}

double quiz1() {
	
	int score = 0;
	int numAttempts = 0; 
	char userInput1; 
	char userInput2[6];
	char userInput3[9];
	
	printf("\nWelcome to Quiz 1: Chemistry\n");
	
	printf("What is the atomic number of Boron?\n");
	printf("A.3\nB.4\nC.5\nD.6\n");
		
		while (score == 0) {
			
			scanf(" %c", &userInput1);
			
			if (userInput1 == 'c' || userInput1 == 'C') {
				printf("Correct!\n");
				score += 5;
				numAttempts++;
			}
			else {
				printf("Incorrect!\n");
				numAttempts++;
			}
		}
		
	printf("Hydrogen is an Alkalai metal, true or false?: ");
	
		while (score == 5) {
			
			scanf("%s", userInput2);
			
			if (strcmp(userInput2,"false") == 0 || strcmp(userInput2,"False") == 0) {
				printf("Correct!\n");
				score += 5;
				numAttempts++;
			}
			else {
				printf("Incorrect!\n");
			}
		}
		
	printf("__ are the negatively charged particles in an atom. Fill in the blank: ");
	
		while (score == 10) {
			
			scanf("%s", userInput3);
			
			if (strcmp(userInput3,"electrons") == 0) {
				printf("Correct!\n");
				score += 5;
				numAttempts++;
			}
			else {
				printf("Incorrect!\n");
				numAttempts++;
			}
		}
		
	return score / (15.0 *  (numAttempts/3.0));
}

double quiz2() {
	
	int score = 0;
	int numAttempts = 0; 
	char userInput1; 
	char userInput2[6];
	char userInput3[9];
	
	printf("\nWelcome to Quiz 2: Math\n");
	
	printf("What is the square root of 121?\n");
	printf("A.8\nB.9\nC.10\nD.11\n");
		
		while (score == 0) {
			
			scanf(" %c", &userInput1);
			
			if (userInput1 == 'd' || userInput1 == 'D') {
				printf("Correct!\n");
				score += 5;
				numAttempts++;
			}
			else {
				printf("Incorrect!\n");
				numAttempts++;
			}
		}
		
	printf("6 is an even number, true or false?: ");
	
		while (score == 5) {
			
			scanf("%s", userInput2);
			
			if (strcmp(userInput2,"true") == 0 || strcmp(userInput2,"True") == 0) {
				printf("Correct!\n");
				score += 5;
				numAttempts++;
			}
			else {
				printf("Incorrect!\n");
				numAttempts++;
			}
		}
		
	printf("The F in the ancronym FOIL means ____. Fill in the blank: ");
	
		while (score == 10) {
			
			scanf("%s", userInput3);
			
			if (strcmp(userInput3,"first") == 0) {
				printf("Correct!\n");
				score += 5;
				numAttempts++;
			}
			else {
				printf("Incorrect!\n");
				numAttempts++;
			}
		}
		
	return score / (15.0 *  (numAttempts/3.0));
}

double quiz3() {
	
	int score = 0;
	int numAttempts = 0; 
	char userInput1; 
	char userInput2[6];
	char userInput3[9];
	
	printf("\nWelcome to Quiz 3: History\n");
	
	printf("In what year did WWII end?\n");
	printf("A.1990\nB.1918\nC.1945\nD.1819\n");
		
		while (score == 0) {
			
			scanf(" %c", &userInput1);
			
			if (userInput1 == 'c' || userInput1 == 'C') {
				printf("Correct!\n");
				score += 5;
				numAttempts++;
			}
			else {
				printf("Incorrect!\n");
				numAttempts++;
			}
		}
		
	printf("Ben Franklin was a president, true or false?: ");
	
		while (score == 5) {
			
			scanf("%s", userInput2);
			
			if (strcmp(userInput2,"false") == 0 || strcmp(userInput2,"False") == 0) {
				printf("Correct!\n");
				score += 5;
				numAttempts++;
			}
			else {
				printf("Incorrect!\n");
				numAttempts++;
			}
		}
		
	printf("We the ___ , in order to form a more perfect union... etc. Fill in the blank: ");
	
		while (score == 10) {
			
			scanf("%s", userInput3);
			
			if (strcmp(userInput3,"people") == 0) {
				printf("Correct!\n");
				score += 5;
				numAttempts++;
			}
			else {
				printf("Incorrect!\n");
				numAttempts++;
			}
		}
		
	return score / (15.0 *  (numAttempts/3.0));
}
