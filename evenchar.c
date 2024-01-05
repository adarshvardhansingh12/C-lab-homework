//Write a program to check given character is even or odd by using ternary/conditional operators
#include<stdio.h>
int main()
{
    char a;
    printf("enter a character");
    scanf("%c",&a);
    (a%2==0)?printf("it is even"):printf("it is odd");
    return 0;
}