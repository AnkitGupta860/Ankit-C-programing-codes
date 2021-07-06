/*           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1 */
#include<stdio.h>
int main()
{
    int i,row,space,colchar;
    scanf("%d",&row);
    for(i=0;i<=row;row++)
    {
        for(space=row-i;space>=1;space--){
            printf("  ");
        }
        int num=i;
        int den=1;
        int printchar=1;
        for(colchar=0;colchar<=row;colchar++){
            printf("%d",printchar);
            printchar=printchar*num;
            printchar=printchar/den;
            num--;
            den++;
        }
        printf("/n");

    }
}