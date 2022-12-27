#include<stdio.h>
void main()
{
    int a[20],n,i,j,l=0,h;
    printf("enter n:");
    scanf("%d",&n);
    h=2*n-2;
    while(n>0)
    {
        for(i=l;i<=h;i++)
        {
            for(j=l;j<=h;j++)
            {
                if(i==l || i==h || j==l || j==h)
                {
                    a[i][j]=n;
                }
            }
        }
        n--;
        l++;
        h--;
    }
}