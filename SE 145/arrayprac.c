#inlcude <stdio.h>

	int main(){
	
		int i;
		int n;
		
		printf("How many numbers in the array: ");
		scanf("%d", &n);
		
		int numbers[n];
		int sum = 0;
		
		
		for (i = 0; i < n; ++i) {
			printf("Number %d: ", n +1);
			scanf("%d", &numbers[i]);
			
		}
		
		 
		 
	
		return 0;
	
	}