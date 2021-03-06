#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void display(int arr[], int size){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[10] = {9, 8, 3, 7, 2, 0, 5, 6, 4, 1};
    bubble_sort(arr,10);
    display(arr, 10);
}