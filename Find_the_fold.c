#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,i,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int T=0,B=0,L=0,R=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0 && a[i][j]==0)
                T++;
            if(j==0 && a[i][j]==0)
                L++;
            if(i==n-1 && a[i][j]==0)
                B++;
            if(j==n-1 && a[i][j]==0)
                R++;
        }
    }
    if(T==n||L==n||B==n||R==n){
        printf("Folded\n");
        if(T==n)
            printf("Top\n");
        else if(L==n)
            printf("Left\n");
        else if(B==n)
            printf("Bottom\n");
        else
            printf("Right\n");
    }    
    else{
        printf("Not Folded\n");
    }    
    return 0;
}