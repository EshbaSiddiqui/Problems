#include<stdio.h>
int main() 
{
    int Amount;
    float discount, New_Amount;
    printf("Enter your amount: ");
    scanf("%d", &Amount);
    if(Amount>1999)
	{
		if(Amount>=2000&&Amount<=4000)
		{
			discount=Amount*0.2;
			New_Amount=Amount-discount;
			printf("\n20%% Discount.\nActual Amount= %d\nSaved amount= %.2f\nAmount after discount= %.2f", Amount, discount, New_Amount);
		}
		else if(Amount>=4001&&Amount<=6000)
		{
			discount=Amount*0.3;
			New_Amount=Amount-discount;
			printf("\n30%% Discount.\nActual Amount= %d\nSaved amount= %.2f\nAmount after discount= %.2f", Amount, discount, New_Amount);
		}
		else
		{
			discount=Amount*0.5;
			New_Amount=Amount-discount;
			printf("\n50%% Discount.\nActual Amount= %d\nSaved amount= %.2f\nAmount after discount= %.2f", Amount, discount, New_Amount);
		}
	}
	else
	{
		printf("\nNo Discount.\nActual Amount= %d\nSaved amount= 0\nAmount after discount= %d", Amount, Amount);
	}
   
    return 0;
}