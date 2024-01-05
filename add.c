//Read the value of a,band c .Add them addition check the sum is in between 100 to 200 or not and print different message.
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum=a+b+c;
    printf("%d",sum);
    if (sum>=100 && sum<=200)
    {
        printf("it is between 100 to 200:\n");
    }
    else{
        printf("it is not between 100 to 200:\n");
    }
    return 0;

}