#include <stdio.h>

int main(){
    int num = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);

    int isPrimeNumber = 1;
    for(int i = 2;i < num;i++){
        if(num % i == 0){
            isPrimeNumber = 0;
            break;
        }
    }

    if(isPrimeNumber){
        printf("It is a prime number.");
    }else{
        printf("It is not a prime number.");
    }
}