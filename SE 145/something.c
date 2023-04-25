#include <stdio.h>

	int main() {
	
		double r;
		double pi = 3.141592653589793238462643383279502884197169399375105820974944592;
		double area;
		double cum;
		
		printf("What is the radius of the circle?:");
		scanf("%lf", &r);
		
		area = pi * (r * r);
		cum = pi * r * 2;
		
		printf("the area of your circle is %.3lf ", area);
		printf("and the circumfrance is %.3lf", cum);
		
		
		
		return 0;
	}