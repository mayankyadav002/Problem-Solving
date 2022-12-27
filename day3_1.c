                         //Find the sum of first n terms of the following series: 1! + 2! + 3! + 4!...................

#include<stdio.h>
void sum_fact(void);
void main()
{
    sum_fact();
}
void sum_fact()
{
    int i,n,sum=0,fact=1;
    printf("enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }       
    printf("sum=%d",sum);
}