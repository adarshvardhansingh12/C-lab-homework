//Write a program to check given value is even or odd by using bitwise operators
#include<stdio.h>
int main()
{
    int num,c;
    printf("Enter any number");
    scanf("%d",&num);
    c=(num&1)?printf("it is odd"):printf("it is even");
    return 0;
}