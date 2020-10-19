//PreprocessorCommand, inkludiert externes Paket namens stdio.h -> StandardLibrary von C (liegt im Compiler)
//Da liegen vordefinierte Funktionen, die für input/output unseres Programmes zuständig sind 
//stdio.h -> F12: Definition
//Debug -> Execute
#include <stdio.h>

//integer, main: Haupteinstiegspunkt(ParameterListe); jedes Programm braucht Start/Ende!
int main()  
{


//priontf: Funktion aus stdio.h zur Ausgabe in Konsole.
//; signalisiert Compiler, dass Anweisung beendet ist.
printf("Hello World!\n");

//Gibt Zahl 0 zurück = Programm konnte erfolgreich ausgeführt werden.
return 0;
}
