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
