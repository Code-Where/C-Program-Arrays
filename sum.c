// Enter an array from user and add all values
#include<stdio.h>

int main(){
    int arr[10], i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    printf("Sum of Values is %d", sum);
    return 0;
}