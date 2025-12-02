#include <stdio.h>

int main()
 {
    int m, n, i, j, T = 0;
    printf("Enter rows & columns: ");
    scanf("%d %d", &m, &n);

    int A[m][n];

    printf("Enter matrix elements:\n");
    for(i = 0; i < m; i++) 
	{
        for(j = 0; j < n; j++) 
		{
            scanf("%d", &A[i][j]);
            if(A[i][j] == 0)
                T++;
        }
    }

    if(T >= (m * n) / 2)
        printf("Matrix is Sparse\n");
    else
        printf("Matrix is Not Sparse\n");

    return 0;
}
