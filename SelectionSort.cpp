#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Function to Swap values
// '*' is the address pointer which holds the memory location 
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Function to sort the Array
void selectionSort(int A[], int n) {
    // Declaring Variables
    int i, j, min_k;

    // consecutive moving boundary
    for (i = 0; i < n-1; i++) {

        // To find the minimum value element in the array
        min_k = i;

        for (j = i+1; j < n; j++)
        // Checking whether the new element is less than the previous
        if (A[j] < A[min_k]) {
            min_k = j;
        }
        // Swapping the newly found minimum value element with current min value element    
        swap(&A[min_k], &A[i]);
    }
}


// Function to print the array
void printArray(int A[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
    int A[] = {34, 56, 23, 65, -10, 19, -22, 53, 12, 44};
    // Size or Length of the array
    int n = sizeof(A)/sizeof(A[0]);

    selectionSort(A, n);
    cout << "Sorted Array: \n";
    printArray(A, n);  
    return 0;
}
