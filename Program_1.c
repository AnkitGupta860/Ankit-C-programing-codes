#include<stdio.h>
int main()
{   
    int n;
    printf("Enter how many exams you passed :");
    scanf("%d",&n);
    if (n<1 || n>2)
    {
        printf("NULL");
    }
    else if (n==2)
    {
        printf("Your gift is 45 Rupees");
    }
    else if (n==1)
    {
        printf("Your gift is 15 Rupees");
    }

}