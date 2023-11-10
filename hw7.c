#include <stdio.h>

void printArr(int arr1[6], int arr2[6]){
    printf("\narr1: ");
    for(int i = 0;i<6;i++){
        printf("%d ", arr1[i]);
    }

    printf("\narr2: ");
    for(int i = 0;i<6;i++){
        printf("%d ", arr2[i]);
    } 
    printf("\n");
}

int main(){
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[6] = {7,8,9,10,11,12};

    printArr(arr1, arr2);
    
    int* arr1Point = &arr1[0];
    int* arr2Point = &arr2[0];
    int temp;

    for(int i = 0;i<6;i++){
        temp = *arr1Point;
        *arr1Point = *arr2Point;
        *arr2Point = temp;
        arr1Point++;
        arr2Point++;
    }

    printf("\nafter swap");
    printArr(arr1, arr2);
}