/*#include<stdio.h>
int main(){
    int a[10];
    int n,i,count;

    // printf("Enter the number of elemnts you want to enter :");

    // scanf("%d",&n);
    
    printf(" Enter the Array elemnts ");

    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<10;i++){
        if(a[0]==a[0+1]){
            count+i;
        }
    }
    printf("output :%d",count);
}*/
#include <stdio.h>

int main() {
    int arr[] = {1, 1, 2, 2, 1, 3, 4, 3, 1, 2, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicate elements: ");
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    return 0;
}