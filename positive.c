// Enter an array from user and print the number which is positive
#include<stdio.h>

int main(){
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Even Values Are\n");
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > 0)
            printf("%d\n", arr[i]); 
    }
    return 0;
}