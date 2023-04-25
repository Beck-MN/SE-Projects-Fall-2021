#include <stdio.h>
#include <string.h>

//Beck Christensen, Tues Sept 14th, Quiz 3 Question 2

  int main(){

    char userName[20] = "se185@iastate.edu";
    char userPass[20] = "ds4rd";
    char userInput[20];
    char passInput[20];

    printf("Enter your username: ");
    scanf("%s", userInput);
    printf("Enter your password: ");
    scanf("%s", passInput);

    if(strcmp(userName,userInput) == 0 && strcmp(userPass,passInput) == 0){
      printf("Success!\n");
    }
    else {
      printf("Username or password is incorrect.\n");
    }

  return 0;
  }
