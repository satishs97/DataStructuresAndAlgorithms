#include <stdio.h>

void insertionSort(int data[], int size) {
    int i, j, key;
    for (i = 1; i <= size - 1; i++) {
        key = data[i];
        j = i;
        while (data[j-1] > key && j >= 1) {
            data[j] = data[j-1];
            j--;
        }
        data[j] = key;
    }
}


void printArray(int data[], int size){
    for(int i=0; i<size; ++i){
        printf("%d  ", data[i]);
    }
    printf("\n");
}

int main(){
    int data[] = {-4, 35, 1, 10, -8};
    int size = sizeof(data)/sizeof(data[0]);
    insertionSort(data, size);
    printf("Sorted array in ascending order:\n");
    printArray(data, size);
}
