#include <stdio.h>

int main() 
{
    long long int num;
    int lastdigit;
    printf("Enter a number: ");
    scanf("%lld", &num);

    if(num==7 || num==-7 || num==0) 
	{
        printf("\nThe number is divisible by 7\n");
    } 
	else
	{
        lastdigit=num%10;
        num=num/10-2*lastdigit;
        if(num==7 || num==-7 || num==0) 
		{
            printf("\nThe number is divisible by 7\n");
        } 
		else
		 {
            lastdigit=num%10;
            num=num/10-2*lastdigit;
            if(num==7 || num==-7 || num==0)
			 {
                printf("\nThe number is divisible by 7\n");
             } 
			else
			 {
                lastdigit=num%10;
                num=num/10-2*lastdigit;
                if(num==7 || num==-7 || num==0) 
				{
                    printf("\nThe number is divisible by 7\n");
                } 
				else 
				{
                    printf("\nThe number is not divisible by 7\n");
                }
            }
        }
    }
    return 0;
}