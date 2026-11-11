#include <iostream>
#include <cmath>

class Circle{ //Circle n'utilisera que public pour mon entraînement.
public:
    double x;
    double y;
    double r; // radius

    std::string set_pos(){
        this->x = x;
        this->y = y;
        return "(" + std::to_string(x) + "," + std::to_string(y) + ")";
    } //"std::to_string" convertir un entier en string/caractère.

    double perimeter(){
        return 2 * M_PI * r; //M_PI est une constante venant de cmath pour "pi". On a doc 2*pi*rayon.
    }

    double area(){
        return M_PI * r * r;
    }

};


class Rectangle{
private:
    double x;
    double y;
    double w; //width
    double h; //height

public:
    Rectangle(double x, double y, double w, double h) {
        this->x = x;
        this->y = y;
        this->w = w;
        this->h = h;
    } //Constructeur.

    std::string set_pos(){
        this->x = x;
        this->y = y;
        return "(" + std::to_string(x) + "," + std::to_string(y) + ")";
    } //Prend le coins haut gauche.

    double perimeter(){
        return 2*(w + h);
    }

    double area(){
        return w*h;
    }
    
};


int main(){
    Circle c;
    c.x = 1;
    c.y = 1;
    c.r = 3;
    std::cout << "Premier cercle; " << "c" << '\n'; //J'aurais dû mettre un attribut nom ou quelque chose comme ça.
    std::cout << "Centre du cercle: " << c.set_pos() << '\n' << "Perimètre du cercle: " << c.perimeter() << '\n' << "Aire du cercle: " << c.area() << '\n';

    std::cout << '\n';

    Rectangle r(-1, -1, 4, 6);
    std::cout << "Premier rectangle; " << "r" << '\n';
    std::cout << "Position coin gauche haut du rectangle: " << r.set_pos() << '\n' << "Perimètre du rectangle: " << r.perimeter() << '\n' << "Aire du rectangle: " << r.area() << '\n';
}


// Tout comme une fonction/procédure, la classe doit avoir un ";".
// La classe possède un "private" et un "public"; private ne peut pas être accédé en dehors de la classe, alors que public
//peut être accédé en dehors de la classe. Les membres d'une classe sont "private" par défaut, l'inverse d'une structure.
// Un "+" indique public, un "-" indique private, dans les diagrammes de classes.
// Une classe est un modèle, un objet est un exemplaire du modèle.
// On ne peut que utiliser Objet o(attributs); si on a un structureur dans le public.
// L'utilisation de "this" est nécessaire pour différencier les attributs et les paramètres de la méthode.
// Soit, "this->x" prend l'attribut donné à l'objet. Donc, this->x = x; dit que le x qu'on utilisera est le x de l'objet.

//En somme; les attributs dans private ne peuvent pas être accédés sans utiliser de méthodes publiques.