// Enter an array from user and remove the duplicate values and fill with zero
#include<stdio.h>

int main(){
    int arr[10], i, j;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        for (j = i+1; j < 10; j++)
        {
            if (arr[i] == arr[j] && arr[i] != 0)
            {
                arr[j] = 0;
            }
        }
    }
    printf("Required Array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]); 
    }
    return 0;
}