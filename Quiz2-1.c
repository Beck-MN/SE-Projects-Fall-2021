#include <stdio.h>
#include <string.h>

//Beck Christensen, Mon Aug 13th, Quiz 2 Question 1

  int main(){
    char first[20];
    char last[20];
    char major[20];
    char year[20];
    int gradyear;

    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter your last name: ");
    scanf("%s", last);
    printf("Enter your major: ");
    scanf("%s", major);
    printf("Enter year in college (freshman, soph, etc.): ");
    scanf("%s", year);
    printf("Enter your graduation year: ");
    scanf("%d", &gradyear);

    printf("Name (last, first): Name (%s, %s) \n",last,first);
    printf("Major: %s\n", major);
    printf("Year: %s\n", year);
    printf("Graduation Year: %d\n", gradyear);


  return 0;
  }
