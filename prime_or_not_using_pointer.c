#include<stdio.h>
int prime(int *p,int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        int f=0;
        for(j=2;j<*(p+i)-1;j++)
        {
            if(*(p+i)%j==0)
            {
                f=1;
                break;
            }
            printf("prime number is %d\n",*(p+i));
            break;
            
              

        }
        
    }
}
int main()
{
   int n;
   printf("length of the array : ");
   scanf("%d",&n);
   int a[n],i;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   prime(&a,n);

}