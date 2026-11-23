#include <iostream>

#include "Observable.hpp"
#include "Observers.hpp"

//Cet exercice ne marche pas car Observers est abstrait et Observable ne l'est pas;
//J'aurais dû rendre les deux abstraits puis créer des .cpp et .hpp pour d'autres classes qui utilisent ces deux abstraits
//comme classes parentes.

int main(void){
    return 0;
}

/*
Prenant l'exemple de youtube;
On a l'Observable, la chaîne youtube. Puis on a l'Observers, l'abonné, qui reçoit la notification quand
il y a une mise à jour de la chaîne (nouvelle vidéo).
Soit: la Chaine est une classe qui hérite d'Observable et Abonne est une classe qui hérite d'Observers et
intérâgit avec Chaine grâce aux méthodes.
*/