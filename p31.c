//Write a program in C to calculate determinant of a 3 x 3 matrix.
#include<stdio.h>
int main()
{
    int m,n,a[10][10],s=0,i,j;
    printf("Enter number of rows and columns :");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    
}    