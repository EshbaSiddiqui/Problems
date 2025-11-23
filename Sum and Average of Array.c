#include <stdio.h>

int main() 
{
    int n, i,k,sum=0;
    float average=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    k=0;
    for(i = 0; i < n; i++) 
	{
		printf("Enter numbers: ");
        scanf("%d", &arr[i]);
        if(arr[i]>0)
        {
        	sum+=arr[i];
        	k++;
        }
        average = sum/k;
    
    }
    printf("Sum of positive numbers = %d\n", sum);
    printf("Average = %.2f\n", average);
    return 0;
}
