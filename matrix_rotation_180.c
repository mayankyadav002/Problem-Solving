#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],i=0,j=0,m,n;
    printf("enter order of matrix:");
    scanf("%d%d",&m,&n);
    printf("enter elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("after rotation 90 rotation:\n");
    for(i=m-1;i>=0;i--)
    {
        for(j=m-1;j>=0;j--)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}