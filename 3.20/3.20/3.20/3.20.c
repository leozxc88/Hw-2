#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hours;
	float rate, salary;
	while (1)
	{
		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &hours);
		if (hours == -1)
		{
			break;
		}
		else
		{
			printf("Enter hourly rate of the woker($00.00):");
			scanf_s("%f", &rate);
			if (hours > 40)
			{
				salary = (hours - 40)*1.5*rate + 40 * rate;
				printf("Salary is $%f", salary);
			}
			else
			{
				salary = hours * rate;
				printf("Salary is $%f", salary);
			}
		}
		printf("\n");
		printf("\n");
	}

	system("pause");
	return;
}