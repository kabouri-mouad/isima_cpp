#include <sstream> // for std::ostringstream
#include "Rectangle.hpp"

Rectangle::Rectangle() {}

Rectangle::Rectangle(int px, int py, int w, int h): x(px), y(py), largeur(w), hauteur(h) {}

int Rectangle::getOrder() {
    return order;
}

void Rectangle::setOrder(int o) {
    order = o;
}

std::string Rectangle::toString() {
    std::ostringstream oss;
    oss << "RECTANGLE " << x << " " << y << " " << largeur << " " << hauteur;
    return oss.str();
}
