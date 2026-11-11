//Partie 2; on veux comprendre la différence entre le passage par valeur et le passage par référence.

//Tout comme la partie 1, on n'utilise pas de fichiers headers; tout dans le même fichier cpp.

#include <iostream>
using namespace std;

class Creature {
public:
    Creature() {} // Constructeur par défaut sans paramètre
    Creature(const Creature &c) {
    // Constructeur par copie.
    cout << "A Creature has been duplicated" << endl;
    }
    ~Creature() {
    // Destructeur, grâce au ~.
    cout << "A Creature has been destroyed" << endl;
    }
};


/*
//Code 1:

void foo(Creature c){
    cout << "foo" << endl; //On se contente d'afficher le string "foo".
}

int main(int argc, char const *argv[]){
    Creature ogre;
    Creature shrek = ogre; //On duplique l'objet "ogre"; Creature shrek = ogre; est équivalent à Creature shrek(ogre);.
    cout << "before foo" << endl;
    foo(shrek);
    cout << "after foo" << endl;
    return 0;
} //En somme ce code permet de suivre la création des objets (variables); chaque création renvoie le message "duplication".
//Après éxécution: 1 duplication (constructeur par copie), "before foo", 1 duplication ("shrek" comme argument),
//"foo", 1 destroy (fin fonction donc on "ferme" le dernier duplicate), "after foo", 2 destroy ("ogre" et "shrek" originaux).
//On peut donc traquer le fonctionnement du code et le nombre de passages de variables (copies).
*/

/*
//Code 2:

void foo(Creature &c){ //On passe la référence plutôt qu'une créature.
 cout << "foo" << endl;
    Creature a = c;
}

int main(int argc, char const *argv[]){
    Creature ogre; //Pas de message.
    cout << "before foo" << endl; //before foo
    foo(ogre); //foo ; A Creature has been duplicated ; A Creature has been destroyed
    cout << "after foo" << endl; //after foo
    return 0; //A Creature has been destroyed
}
//Ce code passe la référence de l'objet ogre à "foo", il n'y a donc pas de duplication imprévue.
//En revanche, ce code créer "Creature a = c;" dans la routine foo, ce qui duplique ogre puis détruit la création.
*/

/*
//Code 3:

void bar(Creature* c){ //On passe un pointeur (vers un objet) plutôt qu'une référence ou un objet.
    cout << "bar" << endl;
    delete c;
}

int main(int argc, char const *argv[]){
    Creature ogre; //Aucun message.
    Creature *shrek = new Creature(ogre); //On créer un pointeur "shrek" vers une nouvelle créature. Duplication.
    cout << "before bar" << endl; //before bar
    bar(shrek); //bar ; A Creature has been destroyed
    cout << "after bar" << endl; //after bar
    return 0; //A creature has been destroyed
}
//First try.
//Ce code suit bien le comportement que j'ai prévu. En utilisant un pointeur, on créer notre objet mais on aurait pû simplement pointer vers ogre.
*/

/*
//Code 4:

//Cette fois-ci, foo est une créature.
Creature foo(Creature &c){
    cout << "foo" << endl;
    Creature local = c;
    return c;
}

int main(int argc, char const *argv[]){
    Creature ogre; //On n'affiche rien.
    cout << "before foo" << endl; //before foo
    Creature shrek = foo(ogre); //foo ; A Creature has been duplicated
    cout << "after foo" << endl; //after foo
    return 0; //A Creature has been destroyed ; A Creature has been destroyed
}
//Je n'ai pas inclut la duplication et la destruction liée à la création de "local" (qui n'est pas renvoyé et donc détruit).
*/

//Réponses aux questions:
/*
1: Le passage par valeur (sans référence& ou pointeur*), ou le passage par copie.
Quand on utilise cette méthode, on duplique le paramètre envoyé vers la variable. Par exemple, void foo(Creature c); créera
une copie de la créature oiseau si on fait foo(oiseau).
Cette méthode est plus lente et plus volumineuse pour certaines fonctions/routines mais permet de ne pas affecter l'original,
sauf si c'est ce qu'on essaye de faire.
*/

/*
2: Le passage par référence (Classe* nomObj ou Classe &nomObj), ou le passage par adresse.
Quand on utilise cette méthode on fourni une référence vers la variable qu'on met en paramètre. Par exemple, void foo(Creature* c);
aura besoin du pointeur et ne créera rien (pas de copie) pour l'itération de la fonction/routine.
Cette méthode est plus rapide et moins volumineuse pour certaines fonctions/routines mais peut affecter l'original.
*/