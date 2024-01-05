#include <stdio.h>
void duplicate(int arr[], int size) 
{
    printf("Output: ");
    for (int i = 0; i < size; i++) 
    {
        for (int j=i+1;j<size;j++) 
        {
            if (arr[i]==arr[j])
            {
            printf("%d ",arr[i]);
            break;
            }
        }
    }
}
int main() 
{
    int arr[]={1,1,2,2,1,3,4,3,1,2,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("Input Array: ");
    for (int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    duplicate(arr,size);
    return 0;
}