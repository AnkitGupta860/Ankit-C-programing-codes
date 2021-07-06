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
            s+=a[i][j];
        }
    }
    printf("%d\n",s);
    avg=(float)s/(m*n);
    printf("%f\n",avg);
}