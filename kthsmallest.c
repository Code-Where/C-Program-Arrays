//Enter an array from user and find the k-th smallest value
#include<stdio.h>
void sort(int arr[], int size){
    int i , j;
    for (i = 0; i < size; i++){
        for (j = i+1; j < size; j++){
            if (arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main(){
    int i, arr[10], k;
    for (i = 0; i < 10; i++){
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter K-th Value\n");
    scanf("%d", &k);
    
    if (k >= 1 && k <=10){
        sort(arr, 10);
        printf("K-th Smallest Value of given list is %d", arr[k-1]);
    }
    else
        printf("We have only 10 element list");
    return 0;
}