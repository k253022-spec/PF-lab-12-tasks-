#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,extra;
    scanf("%d",&n);

    int *sales = malloc(n * sizeof(int));
    int total = 0;

    for(i=0;i<n;i++)
	{
        scanf("%d",&sales[i]);
        total += sales[i];
    }

    printf("%d\n",total);

    scanf("%d",&extra);
    sales = realloc(sales, (n+extra) * sizeof(int));

    for(i=n;i<n+extra;i++)
	{
        scanf("%d",&sales[i]);
        total += sales[i];
    }

    printf("%d\n",total);

    free(sales);
    return 0;
}
