//Enter an array from user and print the array in reverse order
#include<stdio.h>

int main(){
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Printing Array in Reverse Order\n");
    for (i = 9; i >= 0; i--)
    {
          printf("Value at position %d is %d\n", i+1, arr[i]);
    }
    return 0;
}