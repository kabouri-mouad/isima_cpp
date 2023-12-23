#include <string>

class Rectangle {
    private:
        int x;
        int y;
        int largeur;
        int hauteur;
        int order = 0;
    public:
        Rectangle();
        Rectangle(int px, int py, int w, int h);
        int getOrder();
        void setOrder(int o);
        std::string toString();
};