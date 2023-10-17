// Enter two arrays from the user and check they are same or not
#include<stdio.h>

void Selectionsort(int arr[], int size){
    int temp, i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
}

int main(){
    int arr[10],arr2[10], i;
    printf("Enter Elements of First Array\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter Elements of Second Array\n");
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr2[i]);
    }
    
    Selectionsort(arr, 10);
    Selectionsort(arr2, 10);

    for (i = 0; i < 10; i++)
    {
        if (arr[i] != arr2[i])
        {
            printf("Both arrays are not same");
            break;
        }  
    }
    if (i == 10)
    {
        printf("Both arrays are same");
    }
    

    return 0;
}