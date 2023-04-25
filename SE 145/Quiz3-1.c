#include <stdio.h>
#include <stdlib.h>

//Beck Christensen, Tues Sept 14th, Quiz 3 Question 1

  int main(){

    int grade;

    printf("Please enter your grading percentage: ");
    scanf("%d", &grade);

    if(grade < 0 || grade > 100){
      printf("Grades must be between 0%% and 100%% inclusively.\n");
      exit(0);
    }

    if(grade >= 93 && grade <= 100){
      printf("Your grade letter is A\n");
    }
    else if(grade >= 90){
      printf("Your grade letter is A-\n");
    }
    else if(grade >= 87){
      printf("Your grade letter is B+\n");
    }
    else if(grade >= 83){
      printf("Your grade letter is B\n");
    }
    else if(grade >= 80){
      printf("Your grade letter is B-\n");
    }
    else if(grade >= 77){
      printf("Your grade letter is C+\n");
    }
    else if(grade >= 73){
      printf("Your grade letter is C\n");
    }
    else if(grade >= 70){
      printf("Your grade letter is C-\n");
    }
    else if(grade >= 67){
      printf("Your grade letter is D+\n");
    }
    else if(grade >= 63){
      printf("Your grade letter is D\n");
    }
    else if(grade >= 60){
      printf("Your grade letter is D-\n");
    }
    else {
      printf("Your grade letter is F\n");
    }

  return 0;
  }
