#include <iostream>

class Bavarde {
    public:
        int indice;
    public:
        Bavarde();
        Bavarde(int n);
        int get() const;
        void afficher() const;
        // ~Bavarde();
};

Bavarde::Bavarde() {}

Bavarde::Bavarde(int n): indice(n) {
    std::cout << "Construction de Bavarde " << n << std::endl;
}

int Bavarde::get() const{
    return indice;
}

void Bavarde::afficher() const{
    std::cout << "Affichage de " << indice << std::endl;
}

// Bavarde::~Bavarde() {
//     std::cout << "Tais-toi de Bavarde" << std::endl;
// }

class Couple {
    public:
        Bavarde b1;
        Bavarde b2;
    public:
        Couple(int i, int j);
        void afficher() const;
        ~Couple();
};

Couple::Couple(int i, int j): b1(i), b2(j) {
    std::cout << "Construction de Couple" << std::endl;
}

void Couple::afficher() const {
    std::cout << "Objet couple cree !" << std::endl;
}

Couple::~Couple() {
    std::cout << "Tais-toi de Couple" << std::endl;
}

class Famille {
    private:
        Bavarde *bb;
    public:
        Famille(int nombre);
        ~Famille();
};

Famille::Famille(int nombre) {
    (nombre >= 0) ? bb = new Bavarde[nombre] : bb = nullptr;
}

Famille::~Famille() {
    delete [] bb;
}

int main(int, char **) {
    
    Bavarde * monObjet = static_cast<Bavarde*>(malloc(sizeof(Bavarde)));
    std::cout << monObjet -> indice << std::endl;
    free(monObjet);

    return 0;
}

