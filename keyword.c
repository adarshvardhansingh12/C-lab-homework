#include<stdio.h>
void main()
{
    int y;
    char x;
    printf("Enter the character or integer");
    scanf("%c",&x);
    y=(x>=48 && x<=57 ? 1:0);
    printf("\nvalue of y=%d",y);
}