/*
17.An employee in a company works 10 hours per day and gets 10,000 salary in a week. Write a program using pointer to read working hours per day for a week and calculate total working hours and find total salary paid to the employee based on following conditions.

Overtime(Hrs)	Bonus 
<5	             5000
6-10	        10000
>10	            15000
*/
#include<stdio.h>
int main()
{
    int A[7],i,*p=A,s=0,s1,*s2=&s,bonus;
    for(i=0;i<7;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<7;i++)
    {
        if(*(p+i)>10)
        {
            s1=(*(p+i)-10);
            *s2+=s1;
        }
        s1=0;
    }
    if(*s2<5)
        bonus=5000;
    else if(*s2>5 && *s2<10)
        bonus=10000;
    else
        bonus=15000;
    int total;
    total=10000+bonus;
    printf("%d",total);        
}