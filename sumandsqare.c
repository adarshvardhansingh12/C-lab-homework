#include <stdio.h>
int main() 
{
    int sum = 0;
    int sum_of_squares = 0;
    for (int i=1;i<=5;i++) 
    {
        printf("%d\t%d\n",i,i*i);
        sum+=i;
        sum_of_squares+=i*i;
    }
    printf("Sum of first five numbers: %d\n",sum);
    printf("Sum of the squares of the first numbers: %d\n", sum_of_squares);
    return 0;
}
