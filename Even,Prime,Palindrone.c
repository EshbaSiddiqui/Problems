#include <stdio.h>

int main (){

    int number;
    printf("5 digit Number: ");
    scanf("%d",&number);

    if(number>9999 && number<100000){

    int D1= (number/10000);     
    int D2= (number/1000)%10;  
    int D3= (number/100)%10;  
    int D4= (number/10)%10;  
    int D5= (number%10);    

    int sum=D1+D2+D3+D4+D5;

    if(sum%2==0)
	{
        int i, temp=0;
            for(i=2;i<=number/2;i++)
			{
                if(number%i==0)
				{
                    temp++;
                    break;
                }
            }
                if (temp == 0)
                    printf("%d is an Even & Prime number", number);
                else
                    printf("%d is Even but not a Prime number", number);
    }        
    else if(sum%2!=0){
        if(D1==D5 && D2==D4)
            printf("%d is an Odd & Palindrome number",number);
        else
            printf("%d is an Odd but not a Palindrome number",number);
    }
    }

    else
	{
        printf("Error! Not a 5 digit number");
    }
    return 0;
}