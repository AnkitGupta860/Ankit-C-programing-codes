#include<stdio.h>
int main()
{
    int age,acc,excess=0;
    char mf,type;
    float cost,prem,amt;
    printf("Age :");
    scanf("%d",&age);
    printf("How many times have accident in last three years :");
    scanf("%d",&acc);
    printf("manufactured in india or not(i/o) :");
    scanf("%s",&mf);
    printf("Cost of the car :");
    scanf("%f",&cost);
    if(age>=25)
    {
        if(mf=='i')
        {
            if(acc==0)
                prem=6;
            else
            {
                prem=7;
                excess=100;
            }
            type='C';
                
        }
        else
        {
            if(acc==0)
            {
                excess=100;
                type='C';
                prem=6;
            } 
            else
            {
                prem=7;
                type='T';
            }           
        }

    }
    else
    {
        if(mf=='i')
        {
            if(acc==0)
            {
                prem=6;
                excess=100;
                type='C';
            }    
        }
        else
        {
            if(acc==0)
            {
                prem=8;
                excess=100;
                type='C';
            }
            else
            {
                NULL;
            }
        }
    }
    amt=cost*prem/100;
    printf("Type of insurance : %c\n",type);
    printf("%f",amt);
    if(excess!=0)
    printf("%d",excess);

}