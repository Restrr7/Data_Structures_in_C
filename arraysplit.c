#include <stdio.h>

void splitArray(int arr[], int n, int result1[], int result2[]) {
    int mid = n / 2;
    
    for (int i = 0; i < mid; i++) {
        result1[i] = arr[i];
    }

    for (int i = mid; i < n; i++) {
        result2[i - mid] = arr[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], n, left[100], right[100];

    printf("Enter the array size: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("Enter the array elements: ");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        printf("Before splitting array: ");
        printArray(arr, n);

        splitArray(arr, n, left, right);

        printf("First Half: ");
        printArray(left, n / 2);

        printf("Second Half: ");
        printArray(right, n - (n / 2));
    }
    else {
        printf("Array size cannot be 0 or less");
    }

    return 0;
}
