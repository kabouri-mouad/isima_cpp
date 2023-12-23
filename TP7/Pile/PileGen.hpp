template <typename T>
class PileGen {
    private:
        int taille;
        int capacite;
        T * tab;
    public:
        PileGen(int = 256);
        const T& top() const;
        bool isEmpty() const;
        void pop();
        void push(const T &);
        ~PileGen();
};

template <typename T>
PileGen<T>::PileGen(int capa) :
        capacite(capa), taille(0) {
    tab = new T[capacite];
}

template <typename T> 
const T & PileGen<T>::top() const {
    return tab[taille - 1];
}

template <typename T> 
bool PileGen<T>::isEmpty() const {
    return tab[0];
}

template <typename T>
void PileGen<T>::pop(){
    delete &tab[taille-1];
    --taille;
}

template <typename T>
void PileGen<T>::push(const T & el){
    tab[taille] = el;
    ++taille;
}