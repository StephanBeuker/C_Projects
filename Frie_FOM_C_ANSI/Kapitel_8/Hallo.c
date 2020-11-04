#include<stdio.h>

int main() {

	// 5 Buchstaben + Nullterminierung = 6
	char test[] = "Hallo";
    printf("%i\n", sizeof(test)/sizeof(char));

    /*test[5] = 'p';
    printf("%s\n", test);*/


	return 0;
}
