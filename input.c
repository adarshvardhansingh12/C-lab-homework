//Write a program to input any character if the given character is capital letter 
//print 1 or else 0 by using conditional and logical operator
#include<stdio.h>
int main()
{
    int a;
    char x;
    scanf("%c",&x);
    a=(x>=65 && x<=90)?1:0;
    printf("%d",a);
    return 0;
}