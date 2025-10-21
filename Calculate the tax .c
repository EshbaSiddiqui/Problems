#include<stdio.h>
int main()
{
	int salary;
	float taxRate, taxAmount, netSalary;
	printf("Enter your salary: ");
	scanf("%d",&salary);
	printf("Enter taxRate in percentage: ");
	scanf("%f",&taxRate);
	taxAmount= (salary*taxRate)/100;
	netSalary= salary-taxAmount;
	printf("Tax to be paid:%.2f\n",taxAmount);
	printf("Net salary after tax: %.2f\n",netSalary);
	return 0;
}