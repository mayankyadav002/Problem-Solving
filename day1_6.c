#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter sides of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && a==c)
    printf("equilateral triangle");
    else if(a==b||b==c||a==c)
    printf("isosceles triangle");
    else
    printf("scalene triangle");
} 