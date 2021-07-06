#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter two numbers :");
    scanf("%d %d",&a,&b);
    c = a+~b+1;
    printf("%d-%d=%d",a,b,c);
}