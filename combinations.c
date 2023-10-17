#include<stdio.h>

int main(){
    int arr[] = {1, 1, 4, 1, 5};

    for (int i = 0; i < 4; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            printf("%d %d\n", arr[i], arr[j]);
        }
    }
    

    return 0;
}