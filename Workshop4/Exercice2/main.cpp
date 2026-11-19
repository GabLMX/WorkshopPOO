//https://youtu.be/qft8es8bG4I?si=XUx7A29tIHBYNfgQ pour le saxophone et
//https://youtu.be/n4JD-3-UAzM?si=J4reK1qXY7m1LZKT pour le piano.
#include <iostream>
#include "Instrument.hpp"
#include "Saxophone.hpp"
#include "Piano.hpp"

//g++ main.cpp Piano.cpp Saxophone.cpp -o main

int main(void){
    /*
    On veux, à partir d'un seul objet, jouer les deux instruments.
    Soit, on créer un instrument puis on le "transforme" en un autre.
    Dans la boucle while(1), "1" pour jouer le piano (transformer l'objet en Instrument puis Piano) et
    "2" pour jouer le saxophone (transformer l'objet en Instrument puis Saxophone).
    On demandera si l'utilisateur veux jouer sa propre musique au piano ou au saxophone.
    */

    Instrument* ins; //ins est une sorte de pointeur et ne doit pas être instancié avec Instrument* à nouveau.

    while(1){
        std::cout << "Veuillez choisir votre instrument; 1 pour piano, 2 pour saxophone. 3 ou plus pour quitter. \n";
        int userChoice = 0;
        std::cin >> userChoice;
        std::cout << "\n";

        if(userChoice < 1 || userChoice > 2){
            break;
        }
        if(userChoice == 1){
            ins = new Piano;
            std::cout << ins->play() << "\n";
        }
        //"2" est la dernière option restante, donc else{}.
        else{
            ins = new Saxophone; 
            std::cout << ins->play() << "\n";
        }

        delete ins;
        std::cout << "\n";
    }

    return 0;
}



//Le polymorphisme, c'est, par exemple, gérer des garrages et les voitures. (Explication du prof.)
/*
Le prix dépend de la voiture, donc il faut gérer différents tarrifs et détails selon la voiture.
Au lieux d'avoir une classe voiture qui regroupe tout comme une horreur,
on créer un héritage et toutes les spécialisations d'une voiture sont précisées dans une méthode.
Le polymorphisme c'est la capacité à automatiser des spécialisations à partir d'une classe commune.
Par exemple; Voiture* v = newVoiture(); ou Voiture* v = newVoitureSport();
sont des applications du polymorphisme où une Voiture peut être une Voiture ou une VoitureDeSport,
et en fonction de ce qu'est la Voiture elle appellera des méthodes différentes;
Voiture est la classe parente et VoitureDeSport est la classe fille.
Pour utiliser ça, il faut utiliser un pointeur (Voiture* v).
Voiture est "static" mais sont type (Voiture ou VoitureDeSport) n'est pas static.
*/