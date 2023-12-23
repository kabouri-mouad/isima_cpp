#include <iostream>
#include "Point.hpp"

int main(int, char**) {
    Point p;
    Point p1{};
    Point *pp = new Point(1.5, 3);

    p.setX(10);
    p.setY(10);
    std::cout << p.getX() << "\n";
    std::cout << p.getY() << "\n";

    std::cout << Point::getCompteur() << " objets ont ete crees." << "\n";

    return 0;
}
