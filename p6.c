#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int bit,i,n,m,sum=0;
    unsigned long decimal = 0;
    char binary[33];
    scanf("%32s",binary);
    n = strlen(binary);
    for(i=0;i<=n;i++)
    {
        m = pow(2,i)*binary[i];
        sum+=m;
    }
    printf("%d",sum);
}