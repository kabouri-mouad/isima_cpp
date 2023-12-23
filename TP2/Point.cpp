#include <iostream>  // Inclusion d'un fichier standard
#include "Point.hpp" // Inclusion d'un fichier du répertoire courant

int Point::compteur = 0;

Point::Point() {
    compteur++;
    std::cout << "Appel au constructeur sans arguments, compteur : " << compteur << "\n";
}

Point::Point(double px, double py): x(px), y(py) {
    compteur++;
    std::cout << "Appel au constructeur avec arguments , compteur : " << compteur << "\n";
}

void Point::setX(double px) {
    x = px;
}

void Point::setY(double py) {
    y = py;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

void Point::setCompteur(int compteur) {
    compteur = compteur;
}

int Point::getCompteur() {
    return compteur;
}

void Point::deplacerDe(double px, double py) {
    x += px;
    y += py;
}
        
void Point::deplacerVers(double px, double py) {
    setX(px);
    setY(py);
}

Point::~Point() {
    
}
