#include <stdio.h>
#include "lib.h"

int main(void)
{

    printf("Gib mir die Nazhl der Burger");
    int anzBurger = 0;
    scanf("%d", &anzBurger);
    
    printf("Gib mir die Nazhl der Getränke");
    int anzGetraenke = 0;
    scanf("%d", &anzGetraenke);

    printf("Gib mir die Nazhl der Pommes");
    int anzPommes = 0;
    scanf("%d", &anzPommes);


    if (countTotal(anzBurger, anzGetraenke, anzPommes)>5){
        printf("Es wurden mehr als 5 Artikel gekauft");
    }


    /* TODO:
       - Lies die drei Werte mit scanf ein
       - Rufe calculateTotal auf
       - Rufe countItems auf
       - Gib die Ergebnisse mit printf aus
       - Prüfe, ob mehr als 5 Artikel gekauft wurden
    */

    return 0;
}
