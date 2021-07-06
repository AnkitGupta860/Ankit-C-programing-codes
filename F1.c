//1.	Write a program to calculate x^n without using library function pow( ) but using user defined function.
#include<stdio.h>
int poww(int a,int b)
{
    int i,m=1,t;
    for(i=0;i<b;i++){
        t=a;
        m=m*t;
    }    
    return (m);
}
int main()
{
    int p;
    p=poww(2,3);
    printf("%d",p);
}