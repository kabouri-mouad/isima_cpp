#include <iostream>

class Bavarde {
    public:
        int indice;
    public:
        Bavarde(int n);
        int get();
        ~Bavarde();
} bizarre(1);

Bavarde globale(2);

Bavarde::Bavarde(int n) {
    indice = n;
    std::cout << "Construction de " << n << std::endl;
}

int Bavarde::get() {
    return indice;
}

Bavarde::~Bavarde() {
    std::cout << "Tais-toi " << indice << std::endl;
}


void fonction(Bavarde b) {
    std::cout << "code de la fonction";
}

int main(int, char **) {
    Bavarde b1(3);
    Bavarde b2(4);
    Bavarde * p = new Bavarde(5);
    std::cout << Bavarde(0).get() << std::endl; //une instance temporaire

    delete p;
    
    return 0;
}
