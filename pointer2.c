/*Ankit gupta
  100
*/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],*p=s;
    int i,j;
    printf("Enter String : ");
    scanf("%[^\n]",s);
    for(i=0;i<=strlen(s);i++)
    {
        printf("%c ",*(p+i));
    }
}