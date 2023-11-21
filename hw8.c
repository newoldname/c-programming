#include <stdio.h>
#include <math.h>

int size = 5;
double calc(double numbers[]){
    //평균 구하기
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
       sum += numbers[i];
    }
    double average = sum / size;
    
    //편차 제곱 합 구하기
    double averageDiff = 0;
    double averageDiffPower = 0;
    double averageDiffPowerSum = 0; //편차 제곱의 합
    for (int i = 0; i < size; i++)
    {
        //편차 제곱 구하기
        averageDiff = numbers[i] - average;
        averageDiffPower = pow(averageDiff, 2);
        //결과 합치기
        averageDiffPowerSum += averageDiffPower;
    }
    //평균과 나누고 제곱근 하기
    double result = averageDiffPowerSum / size;
    result = sqrt(result);

    //반환하기
    return result;
}

int main(){
    double numbers[size];
    printf("Enter 5 real numbers: ");
    scanf("%lf %lf %lf %lf %lf", numbers+0, numbers+1, numbers+2, numbers+3, numbers+4);

    printf("Standard Deviation = %lf", calc(numbers));

}