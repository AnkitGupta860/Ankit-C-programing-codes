#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    if(n!=0)
        count+=1;
        n=n/10;
    if(n!=0)
        count+=1;
        n=n/10;
    if(n!=0)
        count+=1;
        n=n/10;    
    if(n!=0)
        count+=1;
        n=n/10;
    if(n!=0)
        count+=1;
        n=n/10; 
    printf("%d",count);   
}