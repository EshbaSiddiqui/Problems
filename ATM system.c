#include<stdio.h>
int main()
{
	int choice,balance;
	float amount;
	printf("Enter balance: ");
	scanf("%d",&balance);
	printf("ATM Machine Menu: \n");
	printf("1. check balance\n");
	printf("2. withdraw money\n");
	printf("3. deposit money\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("Your current balance is: %d",balance);
		break;
		case 2: 
		printf("Enter to withdraw money: ");
		scanf("%f",&amount);
		
	}
	
}