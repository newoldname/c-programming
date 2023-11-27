#include <stdio.h>
#include <string.h>

int cityNum = 3;

typedef struct city
{
    char name[20]; 
    char country[50];
    int population;
} City;

void insertStringWithoutEnter(char* str, int strSize){
    fgets(str, strSize, stdin);
    str[strlen(str) - 1] = '\0';
}

void insertCity(City* city){
    printf("Name>");
    insertStringWithoutEnter(city->name, sizeof(city->name));
    printf("County>");
    insertStringWithoutEnter(city->country, sizeof(city->country));
    printf("Population>");
    scanf("%d", &(city->population));
    while (getchar() != '\n'); 
}

void printCity(City* city){
    printf("%s in %s with a population of %d pepple", city->name, city->country, city->population);
}

int main(){
    City cities[cityNum];
    
    printf("Input three cities: \n");
    for(int i = 0;i<cityNum;i++){
        insertCity(cities+i);
    }

    printf("Printing the three cities: \n");
    for(int i = 0;i<cityNum;i++){
        printf("%d. ", i+1);
        printCity(cities+i);
        printf("\n");
    }
}