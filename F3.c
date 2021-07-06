//Write a program to calculate binomial coefficient using function
#include<stdio.h>
int fact(int a)
{
    if(a==0)
        return(1);
    else
        return(a*fact(a-1));   
}
int binomial(int n, int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n,r;
    float result;
    scanf("%d %d",&n,&r);
    result=binomial(n,r);
    printf("%.2f",result);
}