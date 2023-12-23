#include <string>

class Cercle {
    private:
        int x;
        int y;
        int largeur;
        int hauteur;
        int r;
        int order = 0;
    public:
        Cercle();
        Cercle(int px, int py, int w, int h);
        Cercle(int cx, int cy, int rayon);
        int getOrder();
        void setOrder(int o);
        std::string toString();
};