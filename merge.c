// Merge two sorted array into one array but in sorted order
#include<stdio.h>

int* merge(int arr1[], int s1, int arr2[], int s2, int arr[], int size){
    int i = 0, j = 0, k = 0;
    while (k < size)
    {
        if ((arr1[i] < arr2[j] || j == s2) && i != s1){
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr[k] = arr2[j];
            k++;
            j++;
        }
    }
    return arr;
}

int main(){
    int arr1[5], arr2[5], arr[10],i;
    printf("Enter First Array\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr1[i]);
    }
    printf("Enter Second Array\n");
    for (i = 0; i < 5; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr2[i]);
    }

    merge(arr1, 5, arr2, 5, arr, 10);
    printf("Printing Merged Array\n");
    for (i = 0; i < 10; i++)
    {
          printf("Value at position %d is %d\n", i+1, arr[i]);
    }
    return 0; 
}