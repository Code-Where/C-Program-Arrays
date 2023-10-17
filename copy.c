//Enter an array from user and copy the array into second array
#include<stdio.h>

int main(){
    int arr[10], i, arrcpy[10];
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        arrcpy[i] = arr[i];
    }
    
    printf("Printing Copied Array Values\n");
    for (i = 0; i < 10; i++)
    {
          printf("Value at position %d is %d\n", i+1, arrcpy[i]);
    }
    return 0;
}