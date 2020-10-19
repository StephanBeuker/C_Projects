#include<stdio.h>

// Dieses Programm gibt die Größen der Datentypen in Bit aus

int main() {
	printf("short:      %2d Bit\n", sizeof(short)*8);
	printf("int:        %2d Bit\n", sizeof(int)*8);
	printf("long:       %2d Bit\n", sizeof(long)*8);
	printf("long long:  %2d Bit\n", sizeof(long long)*8);


    return 0;
}
