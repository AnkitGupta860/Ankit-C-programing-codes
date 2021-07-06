//           1
//         1   1
//      1   2   1
//     1   3   3    1
//  1  4    6   4   1
// 1  5   10   10  5   1
//        *
//      * * *
//    * * * * *
//  * * * * * * *
//* * * * * * * * *
#include<stdio.h>
int main()
{
    
    int rows,i,space,k=0;
    scanf("%d",&rows);
    for(i=1;i<=rows;++i,k=0){
        for(space=1;space<=rows-i;++space){
            printf("  ");
        }
        while(k!=2*i-1){
            printf("* ");
            ++k;
        }
        printf("\n");    

    }
 
    
}
