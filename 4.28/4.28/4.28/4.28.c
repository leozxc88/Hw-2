#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	float b, c, d, e;
	int hours;
	float rate, salary;
	printf("Enter the mode:");
	scanf_s("%d", &a);
	switch (a)
	{
	case 1:
		printf("Fixed weekly salary:");
		scanf_s("%f", &b);
		printf("The managers salary is:%.1f\n", b);
		break;
	case 2:
		printf("Enter # of hours worked:");
		scanf_s("%d", &hours);
		printf("Enter hourly rate of the woker($00.00):\n");
		scanf_s("%f", &rate);
		if (hours > 40)
		//{
			salary = (hours - 40)*1.5*rate + 40 * rate;
			printf("Salary is $%f\n", salary);
		}
		else
		{
			salary = hours * rate;
			printf("Salary is $%f\n", salary);
		}
		break;
	case 3:
		printf("how much the commission workers earn:");
		scanf_s("%f", &c);
		printf("commission workers's salary is %f\n", 250 + c * 0.057);
		break;
	case 4:
		printf("how much money of the product:");
		scanf_s("%f", &d);
		printf("how many product are saled:");
		scanf_s("%f", &e);
		printf("the piecewoker's salary is %f\n", d*e);
		break;
	}
	system("pause");
	return 0;
}