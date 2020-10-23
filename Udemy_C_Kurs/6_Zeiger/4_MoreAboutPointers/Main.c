#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Mehrer returns nicht möglich, daher pointer benutzen

void add(double* value1, double* value2, double add_value){
    *value1 += add_value;   //* conten(value) of the variable  that is pointed to
    *value2 += add_value;
}


int main(){
    
    double my_value1 = 3.0;
    double my_value2 = 2.0;
    double my_add_value = 1.0;
    add(&my_value1, &my_value2, my_add_value);
    
    printf("%lf\n", my_value1);
    printf("%lf\n", my_value2);

    return EXIT_SUCCESS;
}


