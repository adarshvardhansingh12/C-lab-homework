//auto
#include<stdio.h>
int a=50;
void main()
{
    int a=20;
{
int a=10;
printf("Block=%d",a);
}
printf("Function=%d",a);
}
//Auto
#include<stdio.h>
int a=50;
void main()
{
{
int a;
printf("Block=%d",a);
}
printf("Function=%d",a);
}
//Extern
#include<stdio.h>
void main()
{
    extern int a;
printf("%d",a);
}
//Static
#include<stdio.h>
void sum()
{
    static int a=10;
    static int b=24;
    printf("%d %d \n",a,b);
    a++;
    b++;
}
void main()
{
    int i;
    for(i=0;i<3;i++)
    {
        sum();

    }
}
//Register
#include<stdio.h>
int main()
{
    register int a=10;
    auto int b=8;
    printf("The value of register=%d",a);
    int *p1,*p2;
    p1=&a;
    p2=&b;
    printf("Address of a=%p",p1);
    printf("Address of b=%p",p2);
}
//Solving ques
#include<stdio.h>
int main()
{
    int i=17,j=9,k=4,l=32,m=12;
    while(k)
    {
        m=-i+j++ - k-- + ++l;//m=-17+9-4+33=
    }
    printf("%d %d %d %d %d",i+m,j,k,l,m);

}
//Descending Array
#include<stdio.h>
void main()
{
    int i,j,temp;
    int a[6]={13,22,11,47,23,38};
    for(i=0;i<6;i++)
    {
        for(j=i+1;j<6;j++)
        {
            if(a[j]>a[i])
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
        i++;
    }
}
for(i=0;i<6;i++)
printf("%d \t",a[i]);
}
//Ascending array
#include<stdio.h>
void main()
{
   int n=5,i,j,temp;
   int a[]={10,12,17,23,30};
   for(i=0;i<n-1;i++)
   {
    for(j=0;j<n/2;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    for(j=n/2;j<n-1;j++)
    {
        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
   }
   for(i=0;i<n;i++)
   printf("%d\t",a[i]);
}