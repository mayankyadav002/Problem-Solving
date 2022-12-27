#include<stdio.h>
void main()
{
    int a[5][5],b[5][5],i=0,j=0,m,n,sumD=0,sumd=0,sumc=0,sumr=0,f=0;
    printf("enter order of matrix:");
    scanf("%d%d",&m,&n);
    printf("enter elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sumD=sumD+a[i][j];
            }
            if(i+j==m-1)
            {
                sumd=sumd+a[i][j];
            }
        }
    }
    if(sumD!=sumd)
    f=1;
    else
    {
        for(i=0;i<m;i++)
        {
            sumc=0;
            sumr=0;
            for(j=0;j<n;j++)
            {
                sumc=sumc+a[j][i];
                sumr=sumr+a[i][j];
            }
            if(sumc!=sumD)
            f=1;
            else if(sumr!=sumd)
            f=1;
            else
            f=0;
        }
    }
    if(f==0)
    printf("a magic square");
    else
    printf("not a magic square");
}