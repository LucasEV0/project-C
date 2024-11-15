#include <stdio.h>

//Podria hacer varias versiones de este programa.
    



int main(int argc, char const *argv[])
{
int i, x, y,z;

        for(x = 48; x <= 57; x++){
                for(y = 48; y <= 57; y++){
                    printf("%c%c ", x,y);
                    for(z = 48; z <= 57; z++){
                        printf("%c%c%c ", x,y,z);
                        if(x == 4 && y == 4 && z == 4){
                            printf("SUBLIMEEEEEEEEEEEE");
                            break;
                        }
                }
                }
        }
}

