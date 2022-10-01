#include <stdio.h>
#define DEFAULT_SALARY	12
#define OVERTIME_SALARY	18
#define DEFAULT_TAX		0.15F
#define LEVEL_TWO_TAX	0.20F
#define LEVEL_THREE_TAX	0.25F

int main(void)
{
	int salary = 0;
	int hours = 0;
  	float tax = 0.0f;
	double total_salary = 0;

	printf("How many hours did you work this week?\n");
	scanf("%d", &hours);
	
	if(hours <= 40)
	{
		printf("\nGross pay 1 (less than 40 hours): $%d\n", DEFAULT_SALARY);
		
		salary = DEFAULT_SALARY;
	}
	
	else // hours is not 40
	{
		printf("\nGross pay 2 (over 40 hours): $%d (overtime included)\n", OVERTIME_SALARY);
		
		salary = OVERTIME_SALARY;
	}
	
	total_salary = hours * salary;
	
	if(total_salary <= 300)
	{
		tax = total_salary * DEFAULT_TAX;
		total_salary = total_salary - tax;
		printf("Net pay = %.1f\n", total_salary);
		printf("Tax is : %.1f\n", tax);
	}
	
	else if( total_salary > 300 && total_salary <= 450)
	{
		tax = total_salary * LEVEL_TWO_TAX;
		total_salary = total_salary - tax;
		printf("Net pay = %.2f\n", total_salary);
		printf("Tax is : %.2f\n", tax);
	}
	
	else // total_salary > 450
	{
		tax = total_salary * LEVEL_THREE_TAX;
		total_salary = total_salary - tax;
		printf("Net pay = %.3f\n", total_salary);
		printf("Tax is : %.3f\n", tax);
	}
	
	return 0;
}