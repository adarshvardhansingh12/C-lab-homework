#include<stdio.h>
int main()
{
    float c,d,e,h;
    int a,b,g;
    printf("enter the value of a and b:");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum: %f\n",c);
    d=a-b;
    printf("diff: %f\n",d);
    e=a*b;
    printf("multi: %f\n",e);
    g=a%b;
    printf("rem: %d\n",g);
    h=a/b;
    printf("div: %f\n",h);

    return 0;
}