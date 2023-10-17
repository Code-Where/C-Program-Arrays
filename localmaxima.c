// Find the local maxima in the array (An element in an array is a local maxima if it greater than the element after it, and the element before it)
#include<stdio.h>

int main(){
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    
    for (i = 1; i < 9; i++)
    {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
            printf("%d is local maxima\n", arr[i]);
    }
        
    return 0;
}