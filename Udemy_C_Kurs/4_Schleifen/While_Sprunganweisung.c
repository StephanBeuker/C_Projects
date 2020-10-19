#include<stdio.h>

// int main(){

//     int n_rounds = 10000;
//     int i = 0;

//     while(1){
//         printf("i = %d\n", i);
//         i++;
//         if(i > n_rounds){break;}    //if-Bedingung zum rausspringen, zb. falls man vorher nicht weiß, 
//     }                                //wieviele Schleifen man braucht.ZB abhängig von user input:
    
//     printf("%d", i);


//     return 0;
// }

int main(){

    printf("Wovon willst du vielfache bilden: ");
    int userEingabeVielfache = 0 ;
    scanf("%d", &userEingabeVielfache);
    printf("Wieviele Vielfache willst du bilden: ");
    int userEingabeWieviele = 0 ;
    scanf("%d", &userEingabeWieviele);
    int i = 1;

    while(1){
        
        printf("%d * %d = %d\n",i,userEingabeVielfache , userEingabeWieviele);
        userEingabeWieviele = userEingabeWieviele + userEingabeVielfache;
        int endwert = userEingabeVielfache * userEingabeVielfache;
        if(userEingabeWieviele > endwert){break;}
        i++;    
    }                                
    return 0;
}