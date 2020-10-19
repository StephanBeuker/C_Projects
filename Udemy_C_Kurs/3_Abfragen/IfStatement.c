#include<stdio.h>
int main(){

    int age_Stephan = 38;
    int age_Steffi = 35;

    //Bei logischen Vergleichen: 1 = true
    //Bei logischen Vergleichen: 0 = false

    if(age_Stephan < age_Steffi){
        printf("Stephan is younger than Steffi!");
    }
    else if(age_Stephan > age_Steffi){
        printf("Stefi is younger than Stephan!");
    }
    else{
        printf("Stefi and Stephan have the same age!");
    }




    return 0;
}