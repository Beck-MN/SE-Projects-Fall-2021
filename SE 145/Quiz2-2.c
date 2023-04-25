#include <stdio.h>

//Beck Christensen, Mon Aug 13th, Quiz 2 Quesiton 2

  double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon){
    double totalcost;

    totalcost = (drivenMiles/milesPerGallon) * dollarsPerGallon;

    return totalcost;
  }
  int main(){
    double drivenMiles;
    double milesPerGallon;
    double dollarsPerGallon;
    double totalcost;

    printf("Enter driven miles:");
    scanf("%lf", &drivenMiles);
    printf("Enter miles per gallon:");
    scanf("%lf", &milesPerGallon);
    printf("Enter dollars per gallon:");
    scanf("%lf", &dollarsPerGallon);

    totalcost = DrivingCost(drivenMiles,milesPerGallon,dollarsPerGallon);

    printf("Driving cost = %.2lf\n", totalcost);


  return 0;
  }
