//WAP to input 2 matrices from the user and add them.
#include<stdio.h>
int main()
{
    int m,n,a[10][10],b[10][10],s=0,i,j,m1,n1;
    printf("Enter number of rows and columns of first matrix :");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter number of rows and columns of second matrix :");
    scanf("%d %d",&m1,&n1);
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            scanf("%d",&b[i][j]);
        }
    }
    if(m==m1 && n==n1){
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                s+=a[i][j]+b[i][j];
            }
        }
        printf("%d",s);
    }
    else    
        printf("Both matrix are not same");
}               