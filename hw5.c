#include <stdio.h>
// #include <math.h>

int pow(int base, int exponent){
    int result = 1;
    for(int i = 0;i<exponent;i++){
        result = result * base;
    }
    return result;
}

double dec2bin(int decimal, int bineryDigit){
    if(decimal == 0){
        return 0;
    }
    int quotient = decimal / 2;
    int remainder = decimal % 2;
    double bineryIntNumber = remainder * pow(10, bineryDigit);
    return bineryIntNumber + dec2bin(quotient, bineryDigit+1);
}

int main(){
    int decimalNumber = 0;
    printf("Please enter a number: ");
    scanf("%d", &decimalNumber);
    double bineryNumberOfDecima = dec2bin(decimalNumber, 0);;
    printf("%.0f", bineryNumberOfDecima);
}