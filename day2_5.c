#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=70-i;j<=69;j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}