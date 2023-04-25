#include <stdio.h>
#include <math.h>

//Beck Christensen, Fri Sept 3rd, Quiz 1-2

	int main () {
	
		double x1 = 15.55;
		double x2 = 22.05;
		double x3 = 43.25;
		double x4 = 2.55;
		double x5 = 15.15;
		double y1 = 55.15;
		double y2 = 85.10;
		double y3 = 9.80;
		double y4 = 72.86;
		double y5 = 40.40;
		double mike;
		double mary;
		double gary;
		double logan;
		
		mike = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		mary = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
		gary = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));
		logan = sqrt(pow(x1 - x5, 2) + pow(y1 - y5, 2));
		
		printf("The E distance for Mike is :%lf\n", mike);
		printf("The E distance for Mary is :%lf\n", mary);
		printf("The E distance for Gary is :%lf\n", gary);
		printf("The E distance for Logan is :%lf\n", logan);
		
	return 0;
	}