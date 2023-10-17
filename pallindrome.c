// Enter an array from user and print all the palindrone numbers
#include<stdio.h>

int isPallindrome(int num){
    int rev = 0, n = num;
    while (num != 0)
    {
        rev = (rev*10) + (num%10);
        num /= 10;
    }
    if (n == rev)
    {
        return 1;
    }
    return 0;
}

int main(){
    int arr[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter Value of position %d\n", i+1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {        
        if (isPallindrome(arr[i]))
            printf("%d is Pallindrome\n", arr[i]);  
    }
    return 0;
}