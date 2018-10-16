#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float loan, rate, days, charge;
	while (1)
	{
		printf("Enter loan principal(-1 to end):");
		scanf_s("%f", &loan);
		if (loan == -1)
		{
			break;
		}
		else
		{
			printf("Enter interest rate:");
			scanf_s("%f", &rate);
			printf("Enter term of the loan in days:");
			scanf_s("%f", &days);
			charge = loan * rate*days / 365;
			printf("The interest charge is :%f", charge);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}