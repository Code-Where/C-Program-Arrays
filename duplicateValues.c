// Enter an array from user and count the duplicate values
#include<stdio.h>
void sort(int arr[], int size){
    int i, j;
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
    int arr[10], i, count, avail = 0;
    for (i = 0; i < 10; i++){
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    sort(arr, 10);
    printf("Duplicate Values\n");
    for (i = 0; i < 10; i++)
    {
        count = 1;
        while (arr[i] ==  arr[i+1]){
            count++;
            i++;
            avail = 1;
        }
        if (count > 1){
            printf("%d is present %d times\n", arr[i], count);
        }
        
    }
    if (!avail){
        printf("No Duplicate Values Found");
    }
    return 0;
}