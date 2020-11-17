#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    
    char *Vornamen[7];
        Vornamen[0] = "Max";
        Vornamen[1] = "Peter";
        Vornamen[2] = "Heinz";
        Vornamen[3] = "Pep";
        Vornamen[4] = "Jupp";
       



        char *Nachnamen[7];
        Nachnamen[0] = "Klopp";
        Nachnamen[1] = "Maggat";
        Nachnamen[2] = "Gardiola";
        Nachnamen[3] = "Babbnel";
        Nachnamen[4] = "Heinckes";

        char ausgabe[81];

        for (int i = 0; i < 5; i++){

            int underline = 80;
            underline = underline - (strlen(Vornamen[i]) + strlen(Nachnamen[i]));

            strcpy(ausgabe, Vornamen[i]);

            for (int j = 0; j < underline; j++)
            {
                strcat(ausgabe, "_");

            }
            strcat(ausgabe, Nachnamen[i]);
            printf("%s\n", ausgabe);            
            
        }
        


    return EXIT_SUCCESS;
}
