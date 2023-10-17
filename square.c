// Enter an array from user and square all the values of array
#include<stdio.h>

int main(){
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
        arr[i] = arr[i] * arr[i];
    }
    printf("Squared Array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]); 
    }
    return 0;
}