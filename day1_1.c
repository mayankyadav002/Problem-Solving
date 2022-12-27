#include<stdio.h>
void main()
{
    int ts,basic,hra,da,allow,pf;
    char grade,A,B,C;
    printf("enter basic salary:");
    scanf("%d",&basic);
    printf("enter grade:");
    scanf(" %c",&grade);
    hra=(20/100)*basic;
    da=(50/100)*basic;
    pf=(11/100)*basic;
    if(grade==A)
    {
        allow=1700;
        ts=basic+hra+da+allow-pf;
        printf("total salary is %d\n",ts);
    }
    else if(grade==B)
    {
        allow=1500;
        ts=basic+hra+da+allow-pf;
        printf("total salary is %d\n",ts);
    }
    else
    {
        allow=1300;
        ts=basic+hra+da+allow-pf;
        printf("total salary is %d\n",ts);
    }
}