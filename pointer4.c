#include<stdio.h>
int main()
{
    int A[3],i,*p=A;
    for(i=0;i<3;i++)
    {
        scanf("%d",(p+i));
    }
    int largest=*(p);
    for(i=0;i<2;i++)
    {
        if(*(p+i+1)>largest)
            largest=*(p+i+1);
        else
            largest=*(p+i);    
    }
    printf("largest among them is %d",largest);
}