/*#include<stdio.h>
int fib(int n)
{
    if(n<=1)
    return n;
    else
    return(fib(n-1)+fib(n-2));
}
void main(){
    int num,ans;
    int fib(int);
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        ans=fib(i);
        printf("%d \t",ans);
    }
}*/
/*
#include<stdio.h>
int fib(int n){
    if(n<=1)
    return n;
    else
    return(fib(n-1)+fib(n-2));
}
void main()

{
    int n,ans;
    printf("Enter the number:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
    ans=fib(i);
    printf("%d",ans);
    }
#
}*/
/*
#include<stdio.h>
int fact(int n){
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
void main()
{
    int num,fact1;
    printf("Enter the number:");
    scanf("%d",&num);
    fact1=fact(num);
    printf("Factorial of %d is %d",num,fact1);
}
*/
/*
#include<stdio.h>
int add(int x,int y)
{
    int z=x+y;
    return z;
}
int sub(int x,int y)
{
    int z=x-y;
    return z;
}
int mul(int x,int y)
{
    int z=x*y;
    return z;
}
float div(float x,float y)
{
    float z=x/y;
    return z;
}
void main()
{
    int a,b,c;
    printf("Enter the number:");
    scanf("%d %d",&a,&b);
    printf("\n 1.Add \n 2.Sub \n 3.Mul \n 4. Div\n");
    printf("Enter the choice");
    int ch;
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        c=add(a,b);
        printf("Add=%d",c);
        break;
        case 2:
        c=sub(a,b);
        printf("Sub=%d",c);
        break;
        case 3:
        c=mul(a,b);
        printf("Mul=%d",c);
        break;
        case 4:
        if(b==0)
        printf("Infinity");
        else{
        float d=div(a,b);
        printf("Div=%f",d);
        }
        break;
        default :
        printf("Enter the correct choice");
        break;
        }
}*/