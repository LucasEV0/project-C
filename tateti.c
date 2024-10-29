#include <stdio.h>

int mark(char piece, int X, int Y, char table[3][3])
{
    
    X--;
    Y--;
    if(table[X][Y] == ' '){
        table[X][Y] = piece;
        return 0;
    }else{
        printf("Vuelve a empezar");
        return 1;
    }
    
    

    
}

void tablero(char table[3][3]){
    printf("\n");
    printf("  %c | %c | %c \n", table[0][0],table[0][1], table[0][2]);
    printf(" ---+---+---\n");
    printf("  %c | %c | %c \n", table[1][0],table[1][1], table[1][2]);
    printf(" ---+---+---\n");
    printf("  %c | %c | %c \n", table[2][0],table[2][1], table[2][2]);
    printf("\n");
}

void corroborar(char table[3][3]){
    for (int x = 0; x < 3; x++)
    {
        for (int i = 0; i < 3; i++)
        {
            if((table[x][0] == 'X' && table[x][1] == 'X' && table[x][2] == 'X') || (table[x][0] == 'O' && table[x][1] == 'O' && table[x][2] == 'O')){
                printf("\n Ganaste \n");
                return;
            }
            if((table[0][i] == 'X' && table[1][i] == 'X' && table[2][i] == 'X') || (table[0][i] == 'O' && table[1][i] == 'O' && table[2][i] == 'O')){
                printf("\n Ganaste \n");
                return;
            }
            if((table[i][i] == 'X' && table[i + 1][i + 1] == 'X' && table[i + 2][i + 2] == 'X') || (table[i][i] == 'O' && table[i + 1][i + 1] == 'O' && table[i + 2][i + 2] == 'O')){
                printf("\n Ganaste \n");
                return;
            }
            if((table[0][2] == 'X' && table[1][1] == 'X' && table[2][0] == 'X') || (table[0][2] == 'O' && table[1][1] == 'O' && table[2][0] == 'O')){
                printf("\n Ganaste \n");
                return;
            }
        }
        
    }
    
}

int main()
{
    int a,b;
    int turn = 0;
    char palos[2] = {'O', 'X'}; 
    char selectPalos = palos[0];
    char table[3][3] = {{' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '}};
                        
    printf("Les toca a los %c", selectPalos);
    tablero(table);
    while ((a = getchar()) != EOF && (b = getchar()) != EOF)
    {
        printf("Les toca a los %c", selectPalos);
        selectPalos = palos[turn];
        int check = mark(selectPalos, a - '0', b - '0', table);
        
        if(check == 0){
            corroborar(table);
            if(turn == 0)

                turn = 1;
            else
                turn = 0;
        }
            
        
        tablero(table);
    }
    printf("GRACIAS POR JUGAR!!!");
    
   
    
    

    return 0;
}
