#include<stdio.h>
int main()
{
    char customer;
    float order,discount=0,pay;
    int mtype;
    scanf("%d %c %f",&mtype,&customer,&order);
    if(mtype==32)
    {
        if(customer=='u')
            discount=7.5;

        if(customer=='i')
            if(order<50000)
                discount=5;
            else if (50000<=order<100000)
                discount=7.5;
            else
                discount=10;   

    }
    if(mtype==16)
    {
        if(order<10000)
            discount=0;
        else if(mtype=='i')
            discount=5;
        else if(mtype=='u')
            discount=5;
        else if(mtype=='g')
            discount=6;        
                
    }
    if(mtype==8)
    {
        discount=10;
    }
    pay=order-order*(discount/100);
    printf("\nCustomer=%c Order=%f",customer,order);
    printf("\nMp=%d bit Amount=%f",mtype,pay);
}       