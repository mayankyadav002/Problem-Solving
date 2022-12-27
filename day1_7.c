#include<stdio.h>
void main()
{
    int temp;
    printf("enter temp in centigrade:");
    scanf("%d",&temp);
    if(temp<0)
    printf("freezing weather");
    else if(0<temp && temp<10)
    printf("very cold weather");
    else if(10<temp && temp<20)
    printf("cold weather");
    else if(20<temp && temp<30)
    printf("normal weather");
    else if(30<temp && temp<40)
    printf("hot weather");
    else
    printf("very hot weather");
}