#include<stdio.h>
int main()
{
    int a,b;
    int p;
    int d;
    printf("enter two numbers :");
    scanf("%d %d",&a,&b);
    p=a/b;
    d=a-(p*b);
    printf("%d",d);
}