#include <stdio.h>

//Beck Christenen, Thu Aug 26th, practice program

int main(void) {
  int fresh = 200;
  int soph = 190;
  int jun = 210;
  int sen = 150;
  int total = fresh + soph + jun + sen;
  int staff;
  int budget1 = 1000;
  int budget2;
  
  /*Ok so i had to change the location of the budget2 input
	because the equasion below wasnt able to read the budget2 input. 
	the value was being inputed after the equasion had already been done */
  
  printf("What is the second semester budget?:");
  scanf("%d", &budget2);
  
  int totalbud = budget1 + budget2;
  
  printf("How many staff members are there this year?:");
  scanf("%d", &staff);
  
  

/*this line ask the user to manually input a value for the number
  of staff memebr in the school and the recently added second line is asking
  for a manually inputed value for the second semester budget */

  printf("There are about %d freshmen in the school,", fresh);
  printf("about %d sophmores,\n", soph);
  printf("around %d juniors,", jun);
  printf("and %d seniors.\n", sen);
  printf("There are %d students total attending the school.\n", total);
  printf("On top of that, there are about %d staff members in the school as well.\n", staff);
  printf("The budget for this first semester is gonna be around %d$ ", budget1);
  printf("and for the second\nsemester, its about %d$", budget2);
  printf(" meaning the total budget is gonna around %d$.", totalbud);
  
  /* simple code, displays the number of students in each grade in an arbitrary
     school system and then calculates the total number of students at the end.
     Also I added a scanf command to ask the user to manually input the number
     of staff memebrs and then it displays it along with the rest of the text*/

  /* update: got bored and added a budget counter as well wich displays the
  first semester budget, the second semester budget (which needs to be manually
  inputed), and the total budget which adds the two together one an input is
  set for budget 2*/

  return 0;
}
