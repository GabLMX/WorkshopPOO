#include <iostream>
#include <vector>
#include <string>
#include <random>

#include "Heroes.hpp"
#include "Creatures.hpp"

//"cd cpp" puis "cd" CesiNDragon" d'abord
//Faire: g++ main.cpp Heroes.cpp Creatures.cpp -o program
//Puis: ./program

int main(void){
    //Partie 1: initialisation de la partie
    std::vector<std::string> monsterNames = {"Rey Dau", "Yama Tsukami", "Nakarkos", "Xeno'Jiiva", "Rathalos", "Chameleos",
        "Zoh Shia", "Velkhana", "Arch-tempered Velkhana", "Fatalis", "Safi'Jiiva", "Velocidrome", "Bulldrome", "Gold Rathian",
    "Valstrax", "Crimson Glow Valstrax", "Astalos", "Ceadeus", "Jhen Moran", "Dalamadur", "White Fatalis", "Rathian",
"Silver rathalos", "Brachydios", "Raging Brachydios", "Frostfang Barioth", "Pukei-pukei", "Coral Pukei-pukei", "Glavenus"};
    
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(0, 28); //Pour choisir le nom des monstres générés; distrib(gen().

    std::cout << "Please enter your hero's name: " << "\n";
    std::string playerName;
    std::cin >> playerName;

    int playerLife, playerPower = 5; //That's all well and cool but actually replace this and use the class once you have the name.
    int *ptrLife = &playerLife;
    int *ptrPower = &playerPower;

    int playerLevel = 1;
    int *ptrLvl = &playerLevel;
    int assignedStats = 0;
    int *ptrStats = &assignedStats;
    while(assignedStats != (playerLevel*2)){
        std::cout << "You get two stat points per level. One point equals One Power or Two Life. Please assign them." << "\n";
        std::string playerChoice;
        std::cout << "Enter either 'Power' or 'Life,' case sensitive." << "\n";
        std::cin >> playerChoice;
        if(playerChoice == "Power"){ptrPower += 1; ptrStats += 1;}
        if(playerChoice == "Life"){ptrLife += 2; ptrStats += 1;}
    } //Turn this into a routine and make the strings not repeat.
    
    
    //Partie 2: boucle while du jeu
    while(1){
        //Il faut dire les actions que l'utilisateur peut faire, ajouter ces options, automatiser les processuses, lire les commandes, etc.
    }
}



/*
//Workshop 1 partie 3 fonctionnel
int main(void){
    Heroes Hrun = Heroes("Hrun", 10, 10, 8);
    Creatures YamaTsukami = Creatures("Yama Tsukami", 10, 10, 8);

    std::cout << Hrun.affiche() << "\n";
    std::cout << YamaTsukami.affiche() << "\n";

    double h_atk1 = Hrun.attaque();
    YamaTsukami.subitDegat(h_atk1);

    if (YamaTsukami.estVivant() == true){
        double c_atk1 = YamaTsukami.attaque();
        Hrun.subitDegat(c_atk1);
    }
    else{
        std::cout << "Overwhelming! The creature has died!" << "\n";
    }

    if (Hrun.estVivant() != true){
        std::cout << "You've unfortunately died." << "\n";
    }

    std::cout << "\n" << "Turn breakdown:" << "\n";
    std::cout << Hrun.affiche() << "\n";
    std::cout << YamaTsukami.affiche() << "\n";
}
*/

/*
//Workshop 2 partie 3 test 1 fonctionnel
void foo() {
    Creatures c3("Eh", 2, 2, 1);
    std::cout << "Nombre de créatures: " << Creatures::nbrCreatures << std::endl;
}


int main(void){

    std::cout << "Test 1: \n";
    Creatures c1("Bidoof", 12, 12, 6);
    Creatures c2("Aeiou", 10, 2, 2);
    std::cout << "Nombre de créatures: " << Creatures::nbrCreatures << std::endl;
    foo();
    std::cout << "Nombre de créatures: " << Creatures::nbrCreatures << std::endl;

}
*/

/*
//Workshop 2 partie 3 test 2 fonctionnel
void bar(Creatures c1){
    Creatures c2("Zlatan", 6, 7, 7);
    std::cout << "Nombre de créatures: " << Creatures::nbrCreatures << std::endl;
}


int main(void){
    std::cout << "Test 2: \n";
    Creatures c1("A. Lincoln", 42, 2, 2);
    Creatures c2("Testingator", 10, 2, 2);
    std::cout << "Nombre de créatures: " << Creatures::nbrCreatures << std::endl;
    bar(c2);
    std::cout << "Nombre de créatures: " << Creatures::nbrCreatures << std::endl;
}
*/
