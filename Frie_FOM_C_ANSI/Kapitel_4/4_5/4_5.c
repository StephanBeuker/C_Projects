#include <stdio.h>
#include <stdlib.h>

int fibo(int);

int main(){

    //nicht rekursiv:
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    //rekursiv: muss klar sein welche formel steckt dahinter ? sont keine Chace


    int fibo(int n{
        if(n==0 | n ==1){
            return 1;
        }
        else
        {
            return (fibo(n-1)+fibo(n-2));
        }
        
    }

    return EXIT_SUCCESS;
}

