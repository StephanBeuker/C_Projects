/***************************************************************/
/*  Die Türme von Hanoi                                        */
/*                                                             */
/***************************************************************/

#include <stdio.h>

/**
 * Bewegt n Scheiben von Turm a nach Turm c und verwendet als Zwi-
 * schenspeicher Turm b.
 * also: von Parameter 1 zu Parameter 3 über Parameter 2
 */
void move (char a, char b, char c, int n)
{
    if (n == 1) {
        printf("Lege die oberste Scheibe von Turm %c auf Turm %c.\n", a, c);
    } else {
        move(a, c, b, n-1);
        move(a, b, c, 1);
        move(b, a, c, n-1);
    }
}

int main ()
{
    move('a', 'b', 'c', 3);


    return 0;
}
