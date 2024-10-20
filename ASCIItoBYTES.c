#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
/* imprime la tabla Fahrenheit-Celsius */
int main(){
    int c = getchar();
    int b = c;
    printf("Numero: %d \n", c);
    while(b != 0){
        int ej = b%2;
        printf("%d", ej);
        b = b/2;
    }
    printf("\n");
}