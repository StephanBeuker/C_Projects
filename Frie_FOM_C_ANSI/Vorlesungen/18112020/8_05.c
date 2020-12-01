#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char string[]="Schweigen ist ein Zaun um Weisheit.";
    int i=0;
    
    do{
        
        if (string[i] >= 'a' && string[i] <='z')
        {   
            //string[i] = stringtoupper(string);
            string[i]-=32;
        }
        i++;
    }while(string[i] !='0');

    printf("%s", string[i]);
}

//Wann '' und wann "" ??