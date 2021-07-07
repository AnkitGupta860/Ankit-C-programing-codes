#include<stdio.h>
#include<conio.h>
void main()
{
 float p,r,t,si,*p1,*p2,*p3;
 p1=&p;
 p2=&r;
 p3=&t;
 printf("Enter principal amount: ");
 scanf("%f",p1);
 printf("Enter rate of interest: ");
 scanf("%f",p2);
 printf("Enter time: ");
 scanf("%f",p3);
 si=(*p1**p2**p3)/100;
 printf("\n\nSimple Interest = %f",si);
 getch();
}