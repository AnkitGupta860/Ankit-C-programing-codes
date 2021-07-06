//2.	Write a program that input the meal charge of a customer.  The tax should be 20% of the meal cost.  The tip should be 15% of the total after adding the tax.  Display the total bill on the screen using function.
#include<stdio.h>
int payment(float n)
{
    float tax,total,tip,All_total;
    tax=(n*20)/100;
    total=n+tax;
    tip=(total*15)/100;
    All_total=total+tip;
    return All_total;
}
int main()
{
    float n,result;
    scanf("%f",&n);
    result=payment(n);
    printf("%f",result);
}
