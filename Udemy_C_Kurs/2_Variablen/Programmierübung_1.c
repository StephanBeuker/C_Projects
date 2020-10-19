#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{

    printf("Bitte geben Sie Ihr Alter in Jahren ein: ");
    unsigned char alter = 0;
    scanf("%d", &alter);
    fflush(stdin);
    //printf("Alter in Jahren: %d\n", alter);

    unsigned int monate = alter * 12;
    unsigned int tage = alter * 365;
    unsigned int stunden = tage * 24;
    unsigned int minuten = stunden * 60;
    unsigned int sekunden = minuten * 60;

    printf("Du lebst bereits %d Monate.(ohne Schaltjahre)\n", monate);
    printf("Du lebst bereits %d Tage.(ohne Schaltjahre)\n", tage);
    printf("Du lebst bereits %d Stunden.(ohne Schaltjahre)\n", stunden);
    printf("Du lebst bereits %d Minuten.(ohne Schaltjahre)\n", minuten);
    printf("Du lebst bereits %d Sekunden.(ohne Schaltjahre)\n", sekunden);

    return 0;
}