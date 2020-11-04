
#include <stdio.h>

int main()
{
    struct kunde
    {
           ...
    };

    struct rechnung
    {
           struct kunde kundeninfos;
           ...
    } rechn;


    ...

    return 0;
}
