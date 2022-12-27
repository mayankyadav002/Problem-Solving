                                        //  1!/1+2!/2+3!/3+4!/4+5!/5


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
        sum=sum+fact/i;
    }       
    printf("sum=%d",sum);
}