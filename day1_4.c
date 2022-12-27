#include<stdio.h>
void main()
{
    int n;
    printf("enter year:");
    scanf("%d",&n);
    if(n%4==0 && n%400)
    printf("leap year");
    else if(n%100!=0)
    printf("not a leap year");
    else
    printf("not a leap year");
}