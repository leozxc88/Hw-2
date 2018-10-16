#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int num;
	float charge,credit,limit,balance,exceeded;

	while (1)
	{
		printf("Enter account number(-1 to end):");
		scanf_s("%d", &num);
		if (num == -1)
		{
			break;
		}
		else
		{
			printf("Enter beginning balance:");
			scanf_s("%f", &balance);
			printf("Enter total charges:");
			scanf_s("%f", &charge);
			printf("Enter total credits:");
			scanf_s("%f", &credit);
			printf("Enter credit limit:");
			scanf_s("%f", &limit);
			exceeded = balance + charge - credit;
			if (exceeded > limit)
			{
				printf("Account:\t%d\n", num);
				printf("Credit limit:\t%f\n", limit);
				printf("balance:\t%f\n", exceeded);
				printf("Credit Linmit Exceeded\n");
			}
		}
		printf("\n");
	}

	system("pause");
	return 0;
}