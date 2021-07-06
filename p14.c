#include<stdio.h>
int main()
{
    int i,row,space,colchar;
    scanf("%d",&row);
    for(i=0;i<=row;row++)
    {
        for(space=row-i;space>=1;space--){
            printf(" ");
        }
        int printchar=1
        int num=i;
        int den=1;
        for(colchar=0;colchar<=i;colchar++){
            printf("%d ",printchar);
            printchar=printchar*num;
            printchar=printchar/den;
            num--;
            den++;
        }
        printf("/n");

    }
}