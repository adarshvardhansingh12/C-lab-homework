//Write a program to display 0 if one reads a character through keyqords otherwise 1.
#include<stdio.h>
void main()
{
    char y;
    printf("Enter any integer or character");
    scanf("%c",&y);
    int x=(y>='A' && y<='Z')? printf("0"):printf("1");
    

}