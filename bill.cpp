#include <stdio.h>
int main()
{
	int units ;
	float surcharge, chargeperunit, tatalBill ;
	// input the number of units , surcharge, and charge per unit
	printf("enter thr number of units consumed:");
	scanf("%d", &units);
	printf("enter the surcharge amount:");
	scanf("%f", &surcharge);
	printf("enter the charge per unit:");
	scanf("%f", &chargeperunit) + surcharge;
	//display the total bill
	printf("Electricity Bill: %.2f\n");
	}
