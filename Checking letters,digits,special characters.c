#include<stdio.h>
int main()
{
	char c;
	printf("Enter your Character: ");
	scanf("%c", &c);
	if(c>= 65 && c<=90)
	{
		printf("Your character is Capital letter\n");
    }
	else if(c>=97 && c<=122)
	{
		printf("Your character is Small letter\n");
	}
	else if(c>=48 && c<=57)
	{
	    printf("Your character is Digit\n");	
	}
	else
	{
	    printf("Your character is Special character");
	}
	return 0;
}