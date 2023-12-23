#include <string>
#include "Cercle.hpp"
#include "Rectangle.hpp"

class Liste {
    public:
        static const int MAX_ELEMENT = 10;
        Cercle *cercles;
        int nb_c = 0;
        Rectangle *rectangles;
        int nb_r = 0;
        static int compteur;
    public:
        Liste();
        static int getCompteur();
        void incrementNbCercle();
        void incrementNbRectangle();
        void addCercle(Cercle & cercle);
        void addRectangle(Rectangle & rectangle);
        std::string toString() const;
};