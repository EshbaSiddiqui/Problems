#include<stdio.h>
int main()
{
	float Purchase_amount,discount = 0,final_amount;
	printf("Enter purchase amount: ");
	scanf("%f",&Purchase_amount);
    if(Purchase_amount < 1000)
    {
    	discount = 0;
    }  
    else if(Purchase_amount >= 1000 && Purchase_amount <= 2000)
    {
    	discount = Purchase_amount * 0.05;
	}
	else
	{
		discount = Purchase_amount * 0.10;
	}
	final_amount = Purchase_amount - discount;
	printf("Purchase amount: Rs %.2f\n",Purchase_amount);
	printf("discount: Rs %.2f\n",discount);
	printf("Amount after discount: Rs %.2f\n",final_amount);
	return 0;
}