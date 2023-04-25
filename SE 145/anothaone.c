#include <stdio.h>

//Beck Christensen, Fri Oct 1st, Practice Problem

	int main() {
		
		int number_2;
		int i;
		
		printf("Enter how many elements to store in the array: ");
		scanf("%d", &number_2);
		
		int numbers[number_2];
		
		printf("Please input those %d numbers into the array:\n");
		
		for (i = 0; i < number_2; ++i) {
			printf("Number %d: ", i + 1);
			scanf("%d", &numbers[i]);
		}
		
		printf("Your inputted values are:\n");
		
		for (i = 0; i < number_2; ++i) {
			printf("%d ", numbers[i]);
		}
		
		printf("\nYour values in reverse order are:\n");
		
		for (i = number_2 - 1; i >= 0; --i) {
			printf("%d ", numbers[i]);
		}
		
		return 0;
		
	}