#include <stdio.h>

void deletionatany(int arr[], int *n, int index){
    int i;
    for (i = index; i < *n - 1;i++){ // from index to the last of array
        arr[i] = arr[i + 1];       // shifting all elements to left 
    }
    (*n)--; // decreasing the size after deletion
} // pointer is required else main value will not be changed 
void input(int arr[], int n){  // for input in array
    printf("\nEnter the array elements\n");
    for (int i = 0; i < n;i++){
        scanf("%d", &arr[i]);
    }
}
void printarr(int arr[], int n){ // for printing array
    printf("\n");
    for (int i = 0; i < n;i++){
        printf(" %d ", arr[i]);
    }
}
int main(){

    int arr[100], n, index;
    printf("Enter the array size: ");
    scanf("%d", &n);
    if(n>0){
        input(arr, n);
        printf("Enter the index you want to delete at: ");
        scanf("%d", &index);
        printf("\nBefore deletion\n");
        printarr(arr,n);
        printf("\nAfter deletion\n");
        deletionatany(arr, &n, index);
        printarr(arr, n);
    }
    else{
        printf("\nArray size cannot be 0 or less\n");
    }


    return 0;
}