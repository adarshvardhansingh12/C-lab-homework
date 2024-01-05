#include<stdio.h>
int main()
{
    int num;
    printf("enter the number");
    scanf("%d",&num);
    (num & 1)?printf("it is odd"):printf("it is even");
    return 0;


}