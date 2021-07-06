//Suppose there is president election in US and there are 2 candidates Trump and Biden. Input the votes of both the candidates in 10 states of US and calculate state-wise winner and overall winner
#include<stdio.h>
int main()
{
    int T[10],B[10],TC=0,BC=0;
    int i;
    for(i=0;i<10;i++){
        printf("Enter number of votes of Trump\n");
        scanf("%d",T[i]);
        printf("Enter number of votes of Biden\n");
        scanf("%d",B[i]);
    }
    for(i=0;i<10;i++){
        if(T[i]>B[i]){
            printf("state %d winner is Trump",i);
            TC++;
        }
        else{
            printf("state %d winner is Biden",i);
            BC++;
        }
    }
    if(TC>BC)
        printf("state wise winner is Trump");
    else
        printf("state wise winner is Biden");
}            

