/* 12.	Write a program to keep records and perform statistical analysis for a class of students. The class may have up to 10 students. There are three quizzes during the term for computer programming. Each student is identified by a four digit roll no. The program will print the student scores and calculate and print the following statistics 
1.	High score & Low score for each quiz along with the roll number of that student.
2.	Average of Each Quiz and overall average of all the 3 quizzes
3.	Highest Average and Lowest average of all the three quizzes along with quiz no.
4.	Highest marks & lowest marks of each student in the 3 quizzes along with the quiz no.*/
#include<stdio.h>
int main()
{
    int m,n=4,a[10][4],s=0,i,j;
    printf("Enter number of rows:");
    scanf("%d",&m);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            
        }
    }
}    
