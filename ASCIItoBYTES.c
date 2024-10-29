#include <stdio.h>
#define HALF 2

int main(){
    int characterInput = getchar();
    
    int numberInput = characterInput;
    printf("Numero: %d \n", numberInput);
    while(numberInput != 0){
        int rest = numberInput%HALF;
        printf("%d", rest);
        numberInput = numberInput/HALF;
    }
    printf("\n");
}