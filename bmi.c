#include <stdio.h>

//Beck Christensen, Fri Aug 27th, Practice Program

  int main() {

    int heightft;
    int weightlbs;

    printf("What is your height in ft?: ");
    scanf("%d", &heightft);
    
    printf("What is your weight in lbs?: ");
    scanf("%d", &weightlbs);
	
	int heightm = heightft / 10.7;
    int weightkgs = weightlbs / 2.2;
	printf("%d\n", weightkgs);
	printf("%d", heightm);
	

   // int bmi = weightkgs / heightm;

/*So basically this code takes your weight in lbs, your height in ft, and coverts
the two to kgs and m^2 respectively. It then takes your weight (kgs) and height(m^2)
and calcualtes your BMI using the equasion on line 19*/

   // printf("Your BMI is: %d", bmi);


    return 0;
  }
  