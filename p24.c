//3.	WAP to input a 2D array of size M*N and find the sum of individual rows and individual columns.
#include<stdio.h>
int main()
{
    int m,n,a[10][10],s=0;
    float avg;
    printf("Enter number of rows and columns :");
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        s=0;
        for(int j=0;j<n;j++){
            s+=a[i][j];
        }
        printf("sum of row no. %d = %d\n",i+1,s);
    }
    for(int i=0;i<n;i++){
        s=0;
        for(int j=0;j<m;j++){
            s+=a[j][i];
        }
        printf("sum of column no. %d = %d\n",i+1,s);
    }    
}