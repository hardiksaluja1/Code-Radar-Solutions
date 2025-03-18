#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    // To handle cases where k is greater than the size of the array
    k = k % n; // Ensure k is within the bounds of the array length

    // Create a temporary array to store the rotated version
    int temp[n];

    // Copy the rotated elements into the temp array
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    // Copy the rotated array back into the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, k;
    
    // Take the input for the array size and elements
    scanf("%d", &n); // Read the size of the array
    int arr[n];

    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number of positions to rotate
    scanf("%d", &k);

    // Rotate the array
    rotateArray(arr, n, k);

    // Output the rotated array
    printArray(arr, n);

    return 0;
}
