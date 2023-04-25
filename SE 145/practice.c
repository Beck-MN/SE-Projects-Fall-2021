#include <stdio.h>
	
	//Beck Christensen, Aug 26th, practice program
	
	int main() {
		
		printf("What is the temperature in fahrenheit?:");
		
		int tempF;
		scanf("%d", &tempF);
		
		int tempC = (tempF - 32)* 5/9;
		
		printf("The temperature in celcius is: %d ", tempC);
		
		/*simple conversion program, input temp in F and it gets converted to C 
		via the equasion on line 12*/
		
		return 0;
	}