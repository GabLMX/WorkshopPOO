#include <iostream>

#include "Voiture.hpp"
#include "VoitureDeSport.hpp"

//Ce Workshop est sur le polymorphisme, mais j'ai volontairement ignoré l'utilisation de l'héritage pour ce
//premier exercice afin de voir ce qui n'était pas possible de faire sans l'héritage.
//On a donc une répétition de certaines parties qu'on ne peut pas simplement override et les deux classes sont purement distinctes.

int main(void){
    Voiture v1(105, 4); //Constructeur
    VoitureDeSport v2; //Constructeur défaut
    v2.setAttrib(160, 4);

    std::cout << "Voiture 1 accélère à une vitesse de " << v1.accelerer() << ".\n";
    std::cout << "Voiure de sport 1 accélère à une vitesse de " << v2.accelerer() << ".\n";

    if(v2.isSport()){
        std::cout << "v2 est une voiture de sport." << "\n";
    }
    else{
        std::cout << "v2 n'est pas une voiture de sport." << "\n";
    }

    /*
    v1 = VoitureDeSport(105, 4);
    Comme les deux classes ne sont pas liés via l'héritage, il n'est pas possible de faire
    "Voiture* v = newVoitureDeSport(105, 4);"
    Cette ligne permet de créer un objet de la sous-classe à partir d'un objet de la classe.
    */

    return 0;
}