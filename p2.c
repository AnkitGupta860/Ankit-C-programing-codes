#include <stdio.h>
int main()
{
    char name[40];
    int date,month,year,mob_no;
    printf("enter your name : ");
    scanf("%[^\n]%*c",&name);
    printf("Enter Your DOB : ");
    scanf("%d%*[/-]%d%*[/-]%d",&date,&month,&year);
    printf("Enter Your Mobile No : ");
    scanf("%ld",&mob_no);
    printf("Name\t\t : %s\n",name);
    printf("DOB\t\t : %d/%d/%d\n",date,month,year);
    printf("MObile number\t : %ld",mob_no);

}