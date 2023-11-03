#include <stdio.h>

int main(){
    int inputNumber[5] = {0, 0, 0, 0, 0};
    int oddNumber[5] = {0, 0, 0, 0, 0};
    int evenNumber[5] = {0, 0, 0, 0, 0};
    int oddCounter = 0;
    int evenCounter = 0;
    printf("Please input five integers: ");
    scanf("%d %d %d %d %d", &inputNumber[0], &inputNumber[1], &inputNumber[2], &inputNumber[3], &inputNumber[4]);
    for (int i = 0; i < 5; i++){
        if(inputNumber[i] % 2 == 1){
            oddNumber[oddCounter] = inputNumber[i];
            oddCounter++;
        }else{
            evenNumber[evenCounter] = inputNumber[i];
            evenCounter++;
        }
    }

    printf("Odd numbers: ");
    for (int i = 0; i < oddCounter; i++)
    {
        printf("%d ", oddNumber[i]);
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < evenCounter; i++)
    {
        printf("%d ", evenNumber[i]);
    }
}