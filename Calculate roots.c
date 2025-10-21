#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float disc,root1,root2,realpart,imgpart;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	printf("Enter the value of c: ");
	scanf("%d",&c);
	disc= pow(b,2)-(4*a*c);
	if(disc>0)
	{
		root1= (-b+sqrt(disc)) /(2*a);
		root2= (-b-sqrt(disc)) /(2*a);
		printf("root1 is: %.2f\n",root1);
		printf("root2 is: %.2f\n",root2);
    }
	else if(disc==0)
	{
	    root1= -b/(2*a);
	    printf("One real root are: %f\n",realpart);
	    printf("There is no imaginary root\n");
	}
	else if(disc<0)
	{
		realpart=-b/(2*a);
		imgpart=sqrt(-disc)/(2*a);
		printf("root1 is: %f+%fi\n",realpart,imgpart);
		printf("root2 is: %f-%fi\n",realpart,imgpart);
	}	
	return 0;
}