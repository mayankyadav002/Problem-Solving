#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=i;j++)
        {
            printf("%d",j);
        }
        for(j=i-2;j>=i;j--)
        {
            printf("%d",j);
        }
        //printf("\n");
    }
}