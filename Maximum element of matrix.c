#include <stdio.h>

int main()
 {
    int m, n, i, j, Maximum;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    int A[m][n];
    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < n; j++)
	    {
            scanf("%d", &A[i][j]);
        }
    }
    Maximum = A[0][0];
    printf("Entered Matrix:\n");
    for(i = 0; i < m; i++)
	 {
        for(j = 0; j < n; j++) 
		{
            printf("%d ", A[i][j]);
            if(A[i][j] > Maximum)
                	Maximum = A[i][j];
        }
        printf("\n");
    }
    printf("Maximum element = %d\n", Maximum);
    return 0;
}
