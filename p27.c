//WAP to input a 2D array and find the sum of its diagonal elements
#include<stdio.h>
int main()
{
    int m,n,a[10][10],s=0,i,j;
    printf("Enter number of rows and columns :");
    scanf("%d %d",&m,&n);
    if(m==n){
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
                if(i==j || i+j==n-1)
                    s+=a[i][j];
            }
        }
        printf("%d",s);
    }
    else
        printf("Matrix is't square");

}    