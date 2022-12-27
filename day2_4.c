#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=64+i;j<=63+2*i;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}