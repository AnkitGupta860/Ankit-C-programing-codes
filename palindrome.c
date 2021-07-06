#include<stdio.h>
int main()
{
    int n,i,rem,sum=0,t;
    printf("Enter the number: ");
    scanf("%d",&n);
    n=t;
    do
    {
        rem = n%10;
        sum = sum*10+rem;
        n=n/10;
    } while (n>0);
    if(t==sum)
        printf("Palindrome");
    else
        printf("Not Palindrome");   
    

}