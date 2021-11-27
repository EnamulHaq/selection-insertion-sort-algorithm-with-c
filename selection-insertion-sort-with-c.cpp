/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

// [9,13,15,11,2]
// Insertion sort

void printArray(int data[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
    printf("\n\n");
}

void insertionSort(int data[], int size) {
    for(int i = 1; i < size; i++) {
        int temp = data[i];
        int j = i - 1;
        
        while( j >= 0 && data[j] > temp ) {
            data[j + 1] = data[j];
            j--;
        }
        data[j+1] = temp;
    }
}

void printSelectionSortedArray(int data[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", data[i]);
    }
}
void selectionSort(int data[], int size) {
    for(int i = 0; i < size - 1; i++) {
        int min = i;
        
        for(int j = i + 1; j < size; j++) {
            if(data[j] < data[min]) {
                min = j;
            }
            
            if(min != i) {
                int temp = data[i];
                data[i] = data[min];
                data[min] = temp;
            }
        }
    }
}

int main() {
    printf("Insertion sort: \n");
    int data[] = {9,13,15,11,2};
    int size = sizeof(data) / sizeof(data[0]);
    
    insertionSort(data, size);
    printf("The insertion sort (sorted) array is: ");
    printArray(data, size);
    
    printf("Selection sort: \n");
    selectionSort(data, size);
    printf("The selection sort(sorted) array is: ");
    printSelectionSortedArray(data, size);
}
