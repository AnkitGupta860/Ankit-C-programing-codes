
#include<stdio.h>
int main()
{
    int row,space,k=0,i,count=1,count1=0;
    scanf("%d",&row);
    for(i=1;i<=row;++i){
        for(space=1;space<=row-i;++space){
          printf("  ");
          ++count;
        }
    while(k!=(2*i-1))
    {
        if(count <= (row - 1)){
          printf("%d ",(i+k));
          ++count;
        }
        else{
          ++count1;
          printf("%d ", i + k - 2 * i);
        }
        ++k;
    }
    count = count1 = k = 0;
    printf("\n");
    }
}