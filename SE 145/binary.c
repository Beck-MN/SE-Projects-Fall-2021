#include <stdio.h>
#define MAX 100

//Beck Christensen, Fri Oct 29th, Practice Program

void printNum(int R[],int count);

	int main() {
		
		int userNum;
		int Q;
		int R[MAX];
		int count;
		int i = 0;
		
		
		printf("Please enter the number you want to convert: ");
		scanf("%d",&userNum);
		
		printf("Your number in binary is: ");
		
		while(userNum != 0) {
			Q = userNum / 2;
			R[i] = userNum % 2;
			userNum = Q;
			++count;
			++i;
		}
		
		printNum(R,count);
		
		printf("\n");

	return 0;
 }
 
 void printNum(int R[],int count) {
	 
	 for(int i = count - 1; i >= 0; --i) {
			printf("%d", R[i]);
		}
	 
 }