#include<stdio.h>
#include<math.h>
void sum_fact(void);
void main()
{
    sum_fact();
}
void sum_fact()
{
    int i,n,x,sum=1,fact=1;
    printf("enter n and x:");
    scanf("%d%d",&n,&x);
    for(i=1;i<n;i++)
    {
        fact=fact*i;
        sum=(sum+pow(-x,i)/fact);
    }       
    printf("sum=%d",sum);
}