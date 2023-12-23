#include <iostream>
#include "Liste.hpp"

int main(int, char**) {
    std::cout << "Debut Programme" << "\n";
    Cercle c1;
    Cercle c2;
    Cercle c3;
    Rectangle r1;
    Rectangle r2;

    Liste l;

    l.addCercle(c1);
    l.addCercle(c2);
    l.addRectangle(r1);
    l.addRectangle(r2);
    l.addCercle(c3);

    std::cout << l.toString() << "\n";

    return 0;
}