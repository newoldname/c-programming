#include <stdio.h>

int main(){
    int lines = 5;
    for(int nowLine = 0;nowLine < lines; nowLine++){
        if(nowLine != 0){
            printf("\n");
        }
        for(int space = lines - nowLine; space > 1; space--){
            printf(" ");
        }
        for(int star = 0;star < 2 * nowLine + 1; star++){
            printf("*");
        }
    }
}