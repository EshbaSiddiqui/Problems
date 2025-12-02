#include<stdio.h>
int main()
{
	int A,B;
	printf("Enter a value:");
	scanf("%d",&A);
	printf("Enter a value:");
	scanf("%d",&B);
	A = A+B;
	B = A-B;
	A = A-B;
	printf("Swapped values:\n");
	printf("A = %d\n",A);
	printf("B = %d\n",B);
	return 0;
}