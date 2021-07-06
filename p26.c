//WAP to input a 2D array of size M*N and display the transpose of it.
#include<stdio.h>
int main()
{
    int m,n,a[10][10],i,j;
    printf("Enter number of rows and columns :");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }
}    