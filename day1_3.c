#include<stdio.h>
void main()
{
    char n;
    printf("enter alphabet:");
    scanf(" %c",&n);
    if(n=='a'||n=='A'||n=='e'||n=='E'||n=='i'||n=='I'||n=='o'||n=='O'||n=='u'||n=='U')
    printf("alphabet is vowel");
    else
    printf("alphabet is consonant");
}