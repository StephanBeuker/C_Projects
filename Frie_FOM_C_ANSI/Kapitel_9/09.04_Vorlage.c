#include <stdio.h>

struct mitarbeiter{
       int nummer;
       char *name;
};


int main()
{

    struct mitarbeiter daten[]={
                       {1,"Schmidt"},
                       {2,"Meier"},
                       {3,"Adams"},
                       {4,"Walter"}
                       };
    struct mitarbeiter *z_ma;



    return 0;
}
