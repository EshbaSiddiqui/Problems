#include<stdio.h>
int main()
{
	int Calories;
	float Fatgrams, fatcalories, percentfatcalories;
	printf("Enter the total number of calories in food: ");
	scanf("%d", &Calories);
	printf("Enter fat grams in food: ");
	scanf("%f", &Fatgrams);
	
	fatcalories=Fatgrams*9;
	percentfatcalories=fatcalories/Calories*100;
	
	if(Calories<0||Fatgrams<0||fatcalories>Calories)
	{
		printf("Either the calories or fat grams were incorrectly entered.");
	}
	else
	{
		printf("\nNumber of calories from fat = %.2f\nPercentage of calories that come from fat = %.2f", fatcalories, percentfatcalories);
		if(percentfatcalories<30)
		printf("\nThe food is low in fat.");
	}
	return 0;
}