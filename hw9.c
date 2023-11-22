#include <stdio.h>
#include <string.h>

void convert(char ch){
    int diff = 0;

    if(ch >= 'A' && ch <= 'Z'){
        diff = 'a' - 'A'; // diff > 0
    }
    
    if(ch >= 'a' && ch <= 'z'){
        diff = 'A' - 'a'; // diff < 0
    }

    printf("%c", ch + diff);
    return;
}

int main(){
    char userInput[100];
    fgets(userInput, sizeof(userInput), stdin);
    for (int i = 0; i < strlen(userInput); i++){
        convert(userInput[i]);
    }
}