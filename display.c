#include<stdio.h>
int main()
{
    int num;
    printf("Enter the num");
    scanf("%d",&num);
    (num >= 1 && num <= 100)? printf("1"):printf("0");
    return 0;
}