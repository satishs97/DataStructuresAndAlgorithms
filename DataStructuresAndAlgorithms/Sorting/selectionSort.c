// Bubble Sort in C
#include <stdio.h>

void selectionSort(int data[], int size) {
      int i, j, min, temp;
      for (i = 0; i < size - 1; i++) {
            min = i;
            for (j = i+1; j < size; j++) {
                  if(data [j] < data [min])
                        min = j;
            }
            // swap elements
            temp = data[min];
            data[min] = data[i];
            data[i] = temp;
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
    selectionSort(data, size);
    printf("Sorted array in ascending order:\n");
    printArray(data, size);
}
