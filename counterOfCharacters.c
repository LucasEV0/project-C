#include <stdio.h>

int main(int argc, char const *argv[])
{
    int cn = 0;

    int c;
    while ((c = getchar()) != EOF){
        printf("\n PUEDES ESCRIBIR: ");
        c = getchar();
        if (c == '\n' || c == '\t' || c == ' '){
            cn++;
        }
        printf("\n");
        printf("PUNTOS: %d", cn);
        printf("\n");
        putchar(c);
    }

    return 0;
}
