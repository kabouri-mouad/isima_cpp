template <typename T> class DynamicVector {
    private:
        T* data;         // pointeur vers le tableau de données
        size_t currentSize;    // nombre d'éléments actuellement dans le tableau
        size_t currentCapacity; // capacité actuelle du tableau

    public:
        // Constructeur par défaut avec capacité par défaut de 10
        DynamicVector(size_t capacity = 10) : currentSize(0), currentCapacity(capacity);

        // Constructeur de copie
        DynamicVector(const DynamicVector& other) : currentSize(other.currentSize), currentCapacity(other.currentCapacity);

        // Opérateur d'assignation
        DynamicVector& operator=(const DynamicVector& other);

        // Destructeur
        ~DynamicVector();

        // Méthode pour obtenir la capacité du vecteur
        size_t capacity() const ;

        // Méthode pour obtenir la taille actuelle du vecteur
        size_t size() const;

        // Méthode pour ajouter un élément à la fin du vecteur
        void push_back(T value);

        // Opérateur d'indexation
        double& operator[](size_t index);

        // Opérateur d'indexation constant
        const double& operator[](size_t index) const;

        // Fonction de concaténation
        DynamicVector operator+(const DynamicVector& other) const;
};