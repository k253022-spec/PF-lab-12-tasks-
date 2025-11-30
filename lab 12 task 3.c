#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    char **str = malloc(n * sizeof(char*));
    char temp[1000];

    for(i=0;i<n;i++)
	{
        scanf("%s",temp);
        str[i] = malloc(strlen(temp)+1);
        strcpy(str[i],temp);
    }

    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(strcmp(str[i],str[j])>0){
                char *t = str[i];
                str[i] = str[j];
                str[j] = t;
            }

    for(i=0;i<n;i++)
        printf("%s\n",str[i]);

    for(i=0;i<n;i++)
        free(str[i]);
    free(str);

    return 0;
}
