#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=7-i;j++)
        {
            printf("%d",j);
        }
        for(j=2;j<=2*i-1;j++)
        {
            printf(" ");
        }
        for(j=i+1;j>=3;j--)
        {
            printf("%d",j);
        }
        printf("\n"); 
    }
}