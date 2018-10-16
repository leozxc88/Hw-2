#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float sales, salary;
	while (1)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &sales);
		if (sales == -1)
		{
			break;
		}
		else
		{
			salary = sales * 0.09+200;
			printf("Salay is :%f\n", salary);
		}
	}
	system("pause");
	return 0;
}