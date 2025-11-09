#include<stdio.h>
#include"power.h"

int main()
{
	int num;
	printf("Enter the Number: ");
	scanf("%d",&num);
	
	printf("Square = %d\n",square(num));
	printf("Cube = %d\n",cube(num));
	return 0;
}