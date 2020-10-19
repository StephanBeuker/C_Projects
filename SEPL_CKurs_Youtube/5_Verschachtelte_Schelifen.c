#include<stdio.h>

int a[4] = {10,20,30,40};
int b[12] = {1,7,20,13,54,12,30,100,4,2,10,43};

main()
{
    int gleich = 0;
    for (int ib = 0; ib < 12; ib++) //äußere Schelife zählt von 0 bis 11 hoch
    {
        for (int ia = 0; ia < 4; ia++)  //bei jedem der Druchgänge werden 4 Schleifen durchlaufen 
        {
            if (a[ia] == b[ib])     //in jedem dieser Druchgänge wiederrum wird gecschaut, ob a == b
            {
                gleich +=1;         //wenn a==b: gleich wird um eins erhöht 
            }
            
        }
        
    }
    printf("%d", gleich);       //gibt uns die Anzahl der gleichen Elemente zurück
}