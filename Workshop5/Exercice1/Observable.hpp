#include <iostream>
#pragma once

//Permet de casser les dépéndences circulaires. Voir le header d'Observers pour plus de détails.
class Observers;

class Observable{
protected:
    //Une méthode fonctionnelle semble être d'utiliser std::vector<Observers*> observer.
    //Avec **, on déclare un tableau de pointeurs, créant ainsi des pointeurs de pointeurs.
    Observers ** observers;
    int index;
public:
    Observable();
    int subscribe(Observers* obs);
    int unsubscribe(Observers* obs);
    void notify();
};
//Il faut prévenir Observers d'un changement avec notify() puis le laisser faire ce qu'il veut faire avec son update().