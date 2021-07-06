#include<string.h>
#include<stdio.h>
int palindrome(char *string, int n)
{
    int length;
   char *forward, *reverse;
   length = strlen(string);
   forward = string;
   reverse = forward + length - 1;
   for (forward = string; reverse >= forward;) {
      if (*reverse == *forward) {
         reverse--;
         forward++;
      } else
         break;
   } if (forward > reverse)
      return 1;
   else
      return 0;    
}
int reverse(char *p, int n)
{
    int i;
    char *begin,*end,ch;
    begin = p;
    end = p;
    for(i=0;i<n-1;i++)
        end++;
    for(i=0;i<n/2;i++){
        ch=*end;
        *end=*begin;
        *begin=ch;
        begin++;
        end--;
    }
    /*for(i=0;*(p+i)!='\0';++i)
        printf("%c",*(p+i));*/    
}
int main()
{
    char s[1000];
    scanf("%[^\n]",s);
    int n=0;
    while(s[n]!='\0')
        n++;
    if(palindrome(s,n)==1)
        printf("palindrome");
    else
        printf("not palindrome");    
    
}