#include <iostream>

class Tableau
{
    int * tab;
    int taille;

    public:
        Tableau():tab(nullptr), taille(10)
        {
            tab = new int[taille]; // si problème ?
            for(int i = 0; i < taille; i++) {
                tab[i] = i;
            }
        }
        void afficher() {
            for(int i = 0; i < taille; i++) {
                std::cout << i << "\n";
            }
        }
};

int main(int, char **)
{
    Tableau t;

    t.afficher();

    return 0;
}
