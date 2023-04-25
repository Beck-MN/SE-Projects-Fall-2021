#include <stdio.h>

//Beck Christensen, Fri Sept 3rd, Quiz 1-1

	int main() {
	
	long int phone;
	int area;
	int exchange;
	int unumber;
	
	printf("What is your phone number?:");
	scanf("%ld", &phone);
	
	unumber = phone % 10000;
	area = phone / 10000000;
	exchange = (phone / 10000) % 1000;
	
	
	printf("The area code is: %d\n", area);
	printf("The exchange code is: %d\n", exchange);
	printf("The user number is: %d\n", unumber);
	
	return 0;
	}
	