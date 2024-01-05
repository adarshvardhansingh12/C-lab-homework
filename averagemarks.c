//Given a strength of 5 students take all the five students score and find the average marks of students.
#include<stdio.h>
int main()
{
    int a,b,c,d,e,avg;
    printf("enter the score of the five students");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    avg=(a+b+c+d+e)/5;
    printf("the average of five students is:%d",avg);
    return 0;
}
