#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int a = 0;
    printf("Nummer eingBeben:");
    scanf("%d",&a);
    // if (a > 0 && a < 6)
    // {
    //     //char *wochentage[] = {"Montag", "Dienstag", "Mitwoch", "Donnerstag", "Freitag", "Samstag", "Sonntag"};
    //     char *wochentage[7];
    //     wochentage[0] = "Montag";
    //     wochentage[1] = "Dienstag";
    //     wochentage[2] = "Mittwoch";
    //     wochentage[3] = "Donnerstag";
    //     wochentage[4] = "Freitag";
    //     wochentage[5] = "Samstag";
    //     wochentage[6] = "Sonntag";

    //     printf("Die nummer %d gehört zum WOchentag %s\n", a, wochentage[a-1]);


    // }
    // else
    // {
    //     printf("falsche Zahl");
    //     return EXIT_FAILURE;
    // }

    char *wochentage[7];
        wochentage[0] = "Montag";
        wochentage[1] = "Dienstag";
        wochentage[2] = "Mittwoch";
        wochentage[3] = "Donnerstag";
        wochentage[4] = "Freitag";
        wochentage[5] = "Samstag";
        wochentage[6] = "Sonntag";

        printf("Die nummer %d gehört zum WOchentag %s\n", a, wochentage[a-1]);


    return EXIT_SUCCESS;
}
