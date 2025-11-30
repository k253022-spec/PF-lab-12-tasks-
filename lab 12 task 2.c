#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);

    int *arr = malloc(n * sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    arr = realloc(arr, 2*n * sizeof(int));

    for(i=n;i<2*n;i++)
        scanf("%d",&arr[i]);

    for(i=0;i<2*n;i++)
        printf("%d ",arr[i]);

    free(arr);
    return 0;
}
