#include <stdio.h>

void reverse(int arr[], int n){
    int start = 0, end= n-1;   // start and end variables are made
    while(start<end){   //start and end are swapped until it reaches in the middle
        int temp = arr[start];
        arr[start] = arr[end]; 
        arr[end] = temp;
        start++;
        end--;
    }

}
void printarr(int arr[], int n){ // for printing array
    printf("\n");
    for (int i = 0; i < n;i++){
        printf(" %d ", arr[i]);
    }
}
void input(int arr[], int n){   // for taking array input
    printf("\nEnter the elements\n");
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
}

int main(){
    int arr[100], n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    if(n>0){
        input(arr, n);
        printf("\nBefore reversal\n");
        printarr(arr, n);
        printf("\nAfter reversal\n");
        reverse(arr, n);
        printarr(arr, n);
    }
    else{
        printf("Array size cannot be 0 or less");
    }
    return 0;
}