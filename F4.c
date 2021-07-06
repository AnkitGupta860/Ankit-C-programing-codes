#include<stdio.h>
int total_amount(int n)
{
    int i;
    float amount=0,tax;
    for(i=1;i<=n;i++)
    {
        if(i>=1 && i<=100)
            amount=amount+2;
        else if(i>=101 && i<=200)
            amount=amount+3.50;
        else if(i>=201)
            amount=amount+4.50;
    }
    tax=(amount*10)/100;
    amount=amount+tax;
    return amount;
    
}
int main()
{
    int n;
    float result;
    scanf("%d",&n);
    result=total_amount(n);
    printf("%.4f",result);
}
