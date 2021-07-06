#include<stdio.h>
int main()
{
    int n,e[1000],o[1000],j=0,k=0;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    int a[n],i,s;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0){
            e[j]=a[i];
            j++;
        }    
        else{
            o[k]=a[i];
            k++;    
        }
    }               
    for(i=0;i<j;i++){
        printf("%d\n",e[i]);
    }
    for(i=0;i<k;i++){
        printf("%d\n",o[i]);
    }

}
