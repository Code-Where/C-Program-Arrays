// Enter an array from user and find maximum and minimum value
#include<stdio.h>

int main(){
    int arr[10], i, max, min;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for (i = 1; i < 10; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }

    printf("Maximum = %d\nMinimum = %d", max, min);
    return 0;
}