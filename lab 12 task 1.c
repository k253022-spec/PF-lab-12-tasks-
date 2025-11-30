#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m,n,p,i,j,k;
    scanf("%d %d %d",&m,&n,&p);

    int **A = malloc(m * sizeof(int*));
    int **B = malloc(n * sizeof(int*));
    int **C = malloc(m * sizeof(int*));

    for(i=0;i<m;i++)
	{
        A[i] = malloc(n * sizeof(int));
        C[i] = malloc(p * sizeof(int));
    }
    for(i=0;i<n;i++)
        B[i] = malloc(p * sizeof(int));

    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            scanf("%d",&A[i][j]);

    for(i=0;i<n;i++)
        for(j=0;j<p;j++)
            scanf("%d",&B[i][j]);

    for(i=0;i<m;i++)
        for(j=0;j<p;j++)
		{
            C[i][j] = 0;
            for(k=0;k<n;k++)
                C[i][j] += A[i][k] * B[k][j];
        }

    for(i=0;i<m;i++)
	{
        for(j=0;j<p;j++)
            printf("%d ",C[i][j]);
        printf("\n");
    }

    for(i=0;i<m;i++)
	{
        free(A[i]);
        free(C[i]);
    }
    for(i=0;i<n;i++)
        free(B[i]);

    free(A);
    free(B);
    free(C);

    return 0;
}
