#include <stdio.h>

int main(){
    double km = 0;
    printf("Please enter Kilemeters: ");
    scanf("%lf", &km);
    double mile = km / 1.609;
    printf("%.1lf km is equal to %.1lf miles.", km, mile);
}