#include <sstream> // for std::ostringstream
#include "Cercle.hpp"


Cercle::Cercle() {}

Cercle::Cercle(int px, int py, int w, int h): x(px), y(py), largeur(w), hauteur(h) {}

Cercle::Cercle(int px, int py, int rayon): x(px), y(py), r(rayon) {}

int Cercle::getOrder() {
    return order;
}

void Cercle::setOrder(int o) {
    order = o;
}

std::string Cercle::toString() {
    std::ostringstream oss;
    oss << "CERCLE " << x << " " << y << " " << largeur << " " << hauteur;
    return oss.str();
}
