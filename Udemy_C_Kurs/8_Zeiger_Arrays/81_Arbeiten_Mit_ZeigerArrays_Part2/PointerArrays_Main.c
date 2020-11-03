#include <stdio.h>
#include <stdlib.h>
#include "functionsBib.h"

#define NUM_ELEMENTS 10u

void initMyArray(float *p_array, unsigned int length){  

    printf("1. init-Fkt: 0x%x\n", p_array);
    printf("2. init-Fkt: 0x%x\n", p_array + 1);

    for (int i = 0; i < length; i++){
           
        *(p_array + i) = i; //folgendes zur Verständnissabfrage(Klausur)
    } //=p_array[i]; der Compiler übersetzt das gleich, aber "worst pratice"(kann niemand lesen)
}

//"Wenn man ein Array als Argument ion eine Funktion übergibt(Stack oder Heap spielt keine Rolle)
    //und wenn in der function das Array als Pointer übernommen wird, dann zeigt diese Pointervariable
    //aus fer erste Element in dem Array!"
        // p_array  = Speicheradresse 1tes Element
        // +i       = Gehe i Speicheradressen weiter
        // ohne * nur Speicheradresse in Klammern, um Wert/Inhalt zu ändern * vor Klammern

void computeMyArray(float *p_array, unsigned int length){

    for (int i = 1; i < length; i++){
        float temp = 0.0f;
        for (int j = 0; j < i; j++)
        {
            temp += *(p_array + j);
        }
        
        *(p_array + i) = p_array[i-1] + *(p_array + i);
    }
}

void printMyArray(float *p_array, unsigned int length){ 

    for (int i = 0; i < length; i++){
        printf("array[%d] = \t%.2f\n",i, *(p_array + i));
    }
    
}

int main(){

    float my_stack_array[NUM_ELEMENTS];
    
    printf("1. Main-Fkt: 0x%x\n", &my_stack_array[0]);
    printf("2. Main-Fkt: 0x%x\n", &my_stack_array[1]);

    initMyArray(my_stack_array, NUM_ELEMENTS);        
    printMyArray(my_stack_array, NUM_ELEMENTS);

    printf("\n");

    computeMyArray(my_stack_array, NUM_ELEMENTS);    
    printMyArray(my_stack_array, NUM_ELEMENTS);

    return EXIT_SUCCESS;
}
