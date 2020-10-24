#include<stdio.h>

int fakultaet(int n){
	if (n == 1){
		return 1;
	} else {
		return n * fakultaet(n-1);
    }
}


int main() {

    int n;

	printf("\t\tFakultaetsberechnung rekursiv\n");
	printf("\nBitte n eingeben:");
	scanf("%i", &n);

	printf("%i! = %i\n\n", n, fakultaet(n));

	return 0;
}
