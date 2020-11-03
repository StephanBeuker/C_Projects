#include <stdio.h>
#include <stdlib.h>
#ifdef __unix__
#define clrscr() printf("\x1B[2J")
#elif __BORLANDC__ && __MSDOS__
#include clrscr() system("cls")
#else
#define clrscr() printf("clrscr() - Fehler!!\n")
#endif

#define X 'X'
#define O 'O'
#define LEER ' '
#define GAME_OVER O
#define A_WINNER 1
#define CONTINUE 2

char TicTacToe[3][3] = {{' ', ' ', ' '},
                        {' ', ' ', ' '},
                        {' ', ' ', ' '}};
char Spieler1 = X;
char Spieler2 = O;
unsigned int felder = 9;

void print_spielfeld(void);
char neuer_zug(char);
int if_win(void);

void print_spielfeld(void)
{

    int i;

    clrscr();
    printf("       1  2  3  \n    +---+---+---+\n");
    for (i = 0; i < 3; i++)
    {
        printf("   %d  |  ", i + 1);
        printf("%c", TicTacToe[i][0]);
        printf("  |  ");
        printf("%c", TicTacToe[i][1]);
        printf("  |  ");
        printf("%c", TicTacToe[i][2]);
        printf("  |  \n");
        if (i != 2)
        {
            printf("     +---+---+---+\n");
        }
        else
        {
            printf("     +---+---+---+\n");
        }
    }
}

char neuer_zug(char ch)
{

    unsigned int row, colum;

    printf("\nSpieler \"%c\" ist an der Reihe\n\n", ch);
    printf("Zeile  (1-3): ");
    scanf("%u", &row);
    printf("Spalte  (1-3): ");
    scanf("%u", &colum);

    if (TicTacToe[row - 1][colum - 1] == LEER)
    {
        TicTacToe[row - 1][colum - 1] = ch;
        print_spielfeld();
        if (if_win() == A_WINNER)
        {
            return GAME_OVER;
        }
    }
    else
    {
        print_spielfeld();
        printf("\n!!! Feld ist bereits besetzt !!!\n");
        return (ch == X) ? O : X;
    }

    if (--felder > 0)
    {
        return ch;
    }
    else
    {
        printf("\nAlle Felder sind besetzt - Unentscheden\n");
        return GAME_OVER;
    }
}

int if_win(void)
{

    if (TicTacToe[0][0] == Spieler1 &&
            TicTacToe[0][1] == Spieler1 &&
            TicTacToe[0][2] == Spieler1 ||
        TicTacToe[1][0] == Spieler1 &&
            TicTacToe[1][1] == Spieler1 &&
            TicTacToe[1][2] == Spieler1 ||
        TicTacToe[2][0] == Spieler1 &&
            TicTacToe[2][1] == Spieler1 &&
            TicTacToe[2][2] == Spieler1 ||
        TicTacToe[0][0] == Spieler1 &&
            TicTacToe[1][0] == Spieler1 &&
            TicTacToe[2][0] == Spieler1 ||
        TicTacToe[0][1] == Spieler1 &&
            TicTacToe[1][1] == Spieler1 &&
            TicTacToe[2][1] == Spieler1 ||
        TicTacToe[0][2] == Spieler1 &&
            TicTacToe[1][2] == Spieler1 &&
            TicTacToe[2][2] == Spieler1 ||
        TicTacToe[0][2] == Spieler1 &&
            TicTacToe[1][1] == Spieler1 &&
            TicTacToe[2][0] == Spieler1)
    {

        printf("Spieler 1 hat gewonnen\n");
        return A_WINNER;
    }
    else if (TicTacToe[0][0] == Spieler1 &&
                 TicTacToe[0][1] == Spieler2 &&
                 TicTacToe[0][2] == Spieler2 ||
             TicTacToe[1][0] == Spieler2 &&
                 TicTacToe[1][1] == Spieler2 &&
                 TicTacToe[1][2] == Spieler2 ||
             TicTacToe[2][0] == Spieler2 &&
                 TicTacToe[2][1] == Spieler2 &&
                 TicTacToe[2][2] == Spieler2 ||
             TicTacToe[0][0] == Spieler2 &&
                 TicTacToe[1][0] == Spieler2 &&
                 TicTacToe[2][0] == Spieler2 ||
             TicTacToe[0][1] == Spieler2 &&
                 TicTacToe[1][1] == Spieler2 &&
                 TicTacToe[2][1] == Spieler2 ||
             TicTacToe[0][2] == Spieler2 &&
                 TicTacToe[1][2] == Spieler2 &&
                 TicTacToe[2][2] == Spieler2 ||
             TicTacToe[0][2] == Spieler2 &&
                 TicTacToe[1][1] == Spieler2 &&
                 TicTacToe[2][0] == Spieler2)
    {

        printf("Spieler 2 hat gewonnen\n");
        return A_WINNER;
    }

    return CONTINUE;
}

int main(void)
{

    char check = X;
    print_spielfeld();
    do
    {
        if (check == X)
        {

            check = neuer_zug(O);
        }
        else
        {
            check = neuer_zug(X);
        }
    } while (check != GAME_OVER);
    return EXIT_SUCCESS;
}
