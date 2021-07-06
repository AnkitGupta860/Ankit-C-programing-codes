//WAP to input a matrix of order M*N and check if it’s sparse or dense matrix.
#include<stdio.h>
int main()
{
    int m,n,a[10][10],s=0,i,j,c1,c2;
    printf("Enter number of rows and columns :");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==0)
                c1++;
            else
                c2++;    
        }
    }
    if(c1>c2)
        printf("Matrix is sparse");
    else
        printf("Matrix is not sparse");   
}    